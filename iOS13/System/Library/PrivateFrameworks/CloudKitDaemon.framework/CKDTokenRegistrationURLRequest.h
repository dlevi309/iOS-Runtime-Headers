/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData, NSString;

@interface CKDTokenRegistrationURLRequest : CKDURLRequest {

	BOOL _skipBundleIDCheck;
	NSData* _apsToken;
	NSString* _apsEnvironmentString;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSData * apsToken;                            //@synthesize apsToken=_apsToken - In the implementation block
@property (nonatomic,retain) NSString * apsEnvironmentString;              //@synthesize apsEnvironmentString=_apsEnvironmentString - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                          //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL skipBundleIDCheck;                       //@synthesize skipBundleIDCheck=_skipBundleIDCheck - In the implementation block
-(int)operationType;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(id)sourceApplicationBundleIdentifier;
-(id)sourceApplicationSecondaryIdentifier;
-(id)flowControlKey;
-(NSData *)apsToken;
-(void)setApsEnvironmentString:(NSString *)arg1 ;
-(NSString *)apsEnvironmentString;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(BOOL)requiresTokenRegistration;
-(void)setSkipBundleIDCheck:(BOOL)arg1 ;
-(BOOL)skipBundleIDCheck;
-(void)setApsToken:(NSData *)arg1 ;
-(id)initWithApsToken:(id)arg1 apsEnvironmentString:(id)arg2 bundleID:(id)arg3 skipBundleIDCheck:(BOOL)arg4 ;
@end

