/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WCUserInfo, NSDate, NSError, NSString, NSData, NSDictionary;

@interface WCSessionUserInfoTransfer : NSObject <NSSecureCoding> {

	BOOL _currentComplicationInfo;
	BOOL _transferring;
	WCUserInfo* _userInfoStorage;
	NSDate* _creationDate;
	NSError* _transferError;
	NSString* _transferIdentifier;
	NSString* _complicationTransferIdentifier;

}

@property (nonatomic,retain) WCUserInfo * userInfoStorage;                                               //@synthesize userInfoStorage=_userInfoStorage - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                                      //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) NSError * transferError;                                                              //@synthesize transferError=_transferError - In the implementation block
@property (copy) NSString * transferIdentifier;                                                          //@synthesize transferIdentifier=_transferIdentifier - In the implementation block
@property (copy,readonly) NSData * userInfoData; 
@property (copy) NSString * complicationTransferIdentifier;                                              //@synthesize complicationTransferIdentifier=_complicationTransferIdentifier - In the implementation block
@property (assign,getter=isCurrentComplicationInfo,nonatomic) BOOL currentComplicationInfo;              //@synthesize currentComplicationInfo=_currentComplicationInfo - In the implementation block
@property (assign,getter=isTransferring,nonatomic) BOOL transferring;                                    //@synthesize transferring=_transferring - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)userInfo;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)cancel;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSData *)userInfoData;
-(NSString *)transferIdentifier;
-(id)protobufData;
-(void)setTransferIdentifier:(NSString *)arg1 ;
-(id)initWithTranferIdentifier:(id)arg1 complicationTransferIdentifier:(id)arg2 currentComplication:(BOOL)arg3 ;
-(BOOL)updateUserInfoData:(id)arg1 error:(id*)arg2 ;
-(WCUserInfo *)userInfoStorage;
-(BOOL)updateUserInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifyUserInfo;
-(BOOL)isCurrentComplicationInfo;
-(BOOL)isTransferring;
-(id)initWithComplicationTransferIdentifier:(id)arg1 ;
-(id)initWithProtoBufFileURL:(id)arg1 ;
-(void)setCurrentComplicationInfo:(BOOL)arg1 ;
-(void)setTransferring:(BOOL)arg1 ;
-(void)setUserInfoStorage:(WCUserInfo *)arg1 ;
-(NSError *)transferError;
-(void)setTransferError:(NSError *)arg1 ;
-(NSString *)complicationTransferIdentifier;
-(void)setComplicationTransferIdentifier:(NSString *)arg1 ;
@end

