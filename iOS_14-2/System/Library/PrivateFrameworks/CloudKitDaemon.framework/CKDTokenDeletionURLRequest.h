/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData, NSString;

@interface CKDTokenDeletionURLRequest : CKDURLRequest {

	NSData* _apsToken;
	NSString* _apsEnvironmentString;
	NSString* _bundleID;

}

@property (nonatomic,retain) NSData * apsToken;                            //@synthesize apsToken=_apsToken - In the implementation block
@property (nonatomic,retain) NSString * apsEnvironmentString;              //@synthesize apsEnvironmentString=_apsEnvironmentString - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                          //@synthesize bundleID=_bundleID - In the implementation block
-(NSData *)apsToken;
-(id)applicationBundleIdentifierForNetworkAttribution;
-(void)setBundleID:(NSString *)arg1 ;
-(id)applicationBundleIdentifierForContainerAccess;
-(NSString *)apsEnvironmentString;
-(id)sourceApplicationSecondaryIdentifier;
-(NSString *)bundleID;
-(id)generateRequestOperations;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)setApsEnvironmentString:(NSString *)arg1 ;
-(BOOL)requiresTokenRegistration;
-(id)initWithOperation:(id)arg1 apsToken:(id)arg2 apsEnvironmentString:(id)arg3 bundleID:(id)arg4 ;
-(void)setApsToken:(NSData *)arg1 ;
@end

