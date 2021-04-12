/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithOperation:(id)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(id)generateRequestOperations;
-(long long)databaseScope;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)setDiscoverable:(BOOL)arg1 ;
-(BOOL)requiresTokenRegistration;
-(void)setDiscoverableTrinary:(long long)arg1 ;
-(long long)discoverableTrinary;
@end

