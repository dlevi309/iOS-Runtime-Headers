/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray;

@interface CKDBatchGetUserPrivacySettingsURLRequest : CKDURLRequest {

	NSArray* _containerPrivacySettings;

}

@property (nonatomic,retain) NSArray * containerPrivacySettings;              //@synthesize containerPrivacySettings=_containerPrivacySettings - In the implementation block
-(id)generateRequestOperations;
-(long long)databaseScope;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(NSArray *)containerPrivacySettings;
-(BOOL)requiresTokenRegistration;
-(void)setContainerPrivacySettings:(NSArray *)arg1 ;
@end

