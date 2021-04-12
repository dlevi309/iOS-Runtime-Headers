/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/SXMediaSharingPolicyProvider.h>

@protocol FCHeadlineProviding, FCNewsAppConfigurationManager;
@class NSString;

@interface NUMediaSharingPolicyProvider : NSObject <SXMediaSharingPolicyProvider> {

	id<FCHeadlineProviding> _headline;
	id<FCNewsAppConfigurationManager> _appConfigurationManager;

}

@property (nonatomic,readonly) id<FCHeadlineProviding> headline;                                       //@synthesize headline=_headline - In the implementation block
@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long mediaSharingPolicy; 
-(id<FCHeadlineProviding>)headline;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(unsigned long long)mediaSharingPolicy;
-(id)initWithHeadline:(id)arg1 appConfigurationManager:(id)arg2 ;
@end

