/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSMessage.h>

@class NSArray, NSData, NSString;

@interface IDSMMCSAccessRequestMessage : IDSMessage {

	NSArray* _downloadAuths;
	NSData* _downloadingDeviceToken;
	NSData* _sessionToken;
	NSString* _downloadingDeviceID;
	NSString* _senderID;

}

@property (nonatomic,retain) NSArray * downloadAuths;                      //@synthesize downloadAuths=_downloadAuths - In the implementation block
@property (nonatomic,retain) NSData * downloadingDeviceToken;              //@synthesize downloadingDeviceToken=_downloadingDeviceToken - In the implementation block
@property (nonatomic,retain) NSData * sessionToken;                        //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,retain) NSString * downloadingDeviceID;               //@synthesize downloadingDeviceID=_downloadingDeviceID - In the implementation block
@property (nonatomic,retain) NSString * senderID;                          //@synthesize senderID=_senderID - In the implementation block
-(NSString *)senderID;
-(id)init;
-(long long)responseCommand;
-(void)setSenderID:(NSString *)arg1 ;
-(void)setDownloadAuths:(NSArray *)arg1 ;
-(void)setDownloadingDeviceToken:(NSData *)arg1 ;
-(void)setSessionToken:(NSData *)arg1 ;
-(void)setDownloadingDeviceID:(NSString *)arg1 ;
-(NSArray *)downloadAuths;
-(NSData *)downloadingDeviceToken;
-(id)requiredKeys;
-(NSData *)sessionToken;
-(NSString *)downloadingDeviceID;
-(long long)command;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)messageBody;
@end

