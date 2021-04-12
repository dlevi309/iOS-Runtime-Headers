/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)senderID;
-(id)messageBody;
-(void)setSenderID:(NSString *)arg1 ;
-(long long)command;
-(long long)responseCommand;
-(void)setDownloadAuths:(NSArray *)arg1 ;
-(void)setDownloadingDeviceToken:(NSData *)arg1 ;
-(void)setSessionToken:(NSData *)arg1 ;
-(void)setDownloadingDeviceID:(NSString *)arg1 ;
-(id)requiredKeys;
-(NSArray *)downloadAuths;
-(NSData *)downloadingDeviceToken;
-(NSData *)sessionToken;
-(NSString *)downloadingDeviceID;
@end

