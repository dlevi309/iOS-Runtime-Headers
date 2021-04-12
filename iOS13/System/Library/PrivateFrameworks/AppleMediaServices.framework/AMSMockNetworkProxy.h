/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <CFNetwork/NSURLProtocol.h>

@class AMSMockURLOverride;

@interface AMSMockNetworkProxy : NSURLProtocol {

	AMSMockURLOverride* _currentOverride;

}

@property (nonatomic,retain) AMSMockURLOverride * currentOverride;              //@synthesize currentOverride=_currentOverride - In the implementation block
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(id)_overrides;
+(void)_sync:(/*^block*/id)arg1 ;
+(id)_executedOverrides;
+(void)_removeOverride:(id)arg1 ;
+(id)registeredOverrides;
+(id)executedOverrides;
+(void)addOverride:(id)arg1 ;
+(void)clearOverrides;
+(void)removeOverride:(id)arg1 ;
+(void)_removeAllOverrides;
-(void)finishWithError:(id)arg1 ;
-(void)sendResponse:(id)arg1 ;
-(void)stopLoading;
-(void)startLoading;
-(void)setCurrentOverride:(AMSMockURLOverride *)arg1 ;
-(void)finishWithData:(id)arg1 ;
-(AMSMockURLOverride *)currentOverride;
-(void)performRedirectFromResponse:(id)arg1 ;
@end

