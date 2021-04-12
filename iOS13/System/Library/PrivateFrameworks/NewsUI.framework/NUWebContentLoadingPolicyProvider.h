/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/SWLoadingPolicyProvider.h>

@protocol FCHeadlineProviding;
@class NSString;

@interface NUWebContentLoadingPolicyProvider : NSObject <SWLoadingPolicyProvider> {

	id<FCHeadlineProviding> _headline;

}

@property (nonatomic,readonly) id<FCHeadlineProviding> headline;              //@synthesize headline=_headline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FCHeadlineProviding>)headline;
-(unsigned long long)loadingPolicy;
-(id)initWithHeadline:(id)arg1 ;
@end

