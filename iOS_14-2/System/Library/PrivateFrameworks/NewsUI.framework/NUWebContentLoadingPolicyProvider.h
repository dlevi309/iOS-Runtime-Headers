/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

