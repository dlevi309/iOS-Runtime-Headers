/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <CFNetwork/NSURLProtocol.h>

@class AMSMockURLOverride;

@interface AMSMockNetworkProxy : NSURLProtocol {

	AMSMockURLOverride* _currentOverride;

}

@property (nonatomic,retain) AMSMockURLOverride * currentOverride;              //@synthesize currentOverride=_currentOverride - In the implementation block
+(void)addOverride:(id)arg1 ;
+(id)_executedOverrides;
+(void)_removeOverride:(id)arg1 ;
+(id)registeredOverrides;
+(id)executedOverrides;
+(void)removeOverride:(id)arg1 ;
+(void)_removeAllOverrides;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(id)_overrides;
+(void)clearOverrides;
+(void)_sync:(/*^block*/id)arg1 ;
-(void)sendResponse:(id)arg1 ;
-(void)startLoading;
-(void)finishWithData:(id)arg1 ;
-(void)setCurrentOverride:(AMSMockURLOverride *)arg1 ;
-(AMSMockURLOverride *)currentOverride;
-(void)performRedirectFromResponse:(id)arg1 ;
-(void)stopLoading;
-(void)finishWithError:(id)arg1 ;
@end

