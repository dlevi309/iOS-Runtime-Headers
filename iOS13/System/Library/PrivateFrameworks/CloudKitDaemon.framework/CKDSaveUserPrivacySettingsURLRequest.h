/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString;

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest {

	NSString* _bundleID;
	long long _discoverableTrinary;

}

@property (assign,nonatomic) long long discoverableTrinary;              //@synthesize discoverableTrinary=_discoverableTrinary - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                          //@synthesize bundleID=_bundleID - In the implementation block
-(id)init;
-(int)operationType;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(long long)databaseScope;
-(void)setDiscoverable:(BOOL)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(BOOL)requiresTokenRegistration;
-(void)setDiscoverableTrinary:(long long)arg1 ;
-(long long)discoverableTrinary;
@end

