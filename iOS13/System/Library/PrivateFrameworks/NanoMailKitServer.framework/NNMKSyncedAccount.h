/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)displayName;
-(id)account;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSArray *)emailAddresses;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(unsigned long long)sourceType;
-(void)setSourceType:(unsigned long long)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(NSString *)accountId;
-(void)setAccountId:(NSString *)arg1 ;
-(BOOL)shouldArchive;
-(void)setShouldArchive:(BOOL)arg1 ;
-(void)setLocalId:(NSString *)arg1 ;
-(NSString *)localId;
-(BOOL)resendRequested;
-(unsigned long long)resendInterval;
-(void)setResendRequested:(BOOL)arg1 ;
-(void)setResendInterval:(unsigned long long)arg1 ;
@end

