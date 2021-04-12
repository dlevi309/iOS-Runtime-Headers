/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@class NSString;

@interface AAStorableLoginContext : NSObject {

	NSString* _appleID;
	NSString* _altDSID;
	NSString* _DSID;
	NSString* _rawPassword;
	NSString* _continuationKey;
	NSString* _passwordResetKey;
	NSString* _cloudKitToken;

}

@property (nonatomic,readonly) NSString * appleID;                   //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,readonly) NSString * altDSID;                   //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSString * DSID;                          //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy) NSString * rawPassword;                   //@synthesize rawPassword=_rawPassword - In the implementation block
@property (nonatomic,copy) NSString * continuationKey;               //@synthesize continuationKey=_continuationKey - In the implementation block
@property (nonatomic,copy) NSString * passwordResetKey;              //@synthesize passwordResetKey=_passwordResetKey - In the implementation block
@property (nonatomic,copy) NSString * cloudKitToken;                 //@synthesize cloudKitToken=_cloudKitToken - In the implementation block
-(NSString *)altDSID;
-(NSString *)appleID;
-(NSString *)cloudKitToken;
-(id)initWithAppleID:(id)arg1 altDSID:(id)arg2 ;
-(void)setCloudKitToken:(NSString *)arg1 ;
-(void)setDSID:(NSString *)arg1 ;
-(void)setRawPassword:(NSString *)arg1 ;
-(void)setContinuationKey:(NSString *)arg1 ;
-(void)setPasswordResetKey:(NSString *)arg1 ;
-(NSString *)DSID;
-(NSString *)rawPassword;
-(NSString *)continuationKey;
-(NSString *)passwordResetKey;
@end

