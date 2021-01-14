/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@class NSString, NSArray;

@interface NNMKSyncedAccount : NSObject {

	BOOL _shouldArchive;
	BOOL _resendRequested;
	NSString* _accountId;
	NSString* _displayName;
	NSArray* _emailAddresses;
	unsigned long long _resendInterval;
	unsigned long long _sourceType;
	NSString* _username;
	NSString* _localId;

}

@property (nonatomic,retain) NSString * accountId;                           //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,retain) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL shouldArchive;                             //@synthesize shouldArchive=_shouldArchive - In the implementation block
@property (nonatomic,retain) NSArray * emailAddresses;                       //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (assign,nonatomic) BOOL resendRequested;                           //@synthesize resendRequested=_resendRequested - In the implementation block
@property (assign,nonatomic) unsigned long long resendInterval;              //@synthesize resendInterval=_resendInterval - In the implementation block
@property (assign,nonatomic) unsigned long long sourceType;                  //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,retain) NSString * username;                            //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * localId;                             //@synthesize localId=_localId - In the implementation block
-(id)account;
-(unsigned long long)sourceType;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setLocalId:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(id)init;
-(NSString *)localId;
-(NSArray *)emailAddresses;
-(void)setSourceType:(unsigned long long)arg1 ;
-(void)setAccountId:(NSString *)arg1 ;
-(NSString *)username;
-(BOOL)shouldArchive;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)setShouldArchive:(BOOL)arg1 ;
-(NSString *)accountId;
-(NSString *)displayName;
-(BOOL)resendRequested;
-(unsigned long long)resendInterval;
-(void)setResendRequested:(BOOL)arg1 ;
-(void)setResendInterval:(unsigned long long)arg1 ;
@end

