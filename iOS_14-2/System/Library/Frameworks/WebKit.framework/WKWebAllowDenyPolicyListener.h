/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WebAllowDenyPolicyListener.h>

@class NSString;

@interface WKWebAllowDenyPolicyListener : NSObject <WebAllowDenyPolicyListener> {

	Function<void (bool)>* _completionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)deny;
-(void)allow;
-(BOOL)shouldClearCache;
-(void)denyOnlyThisRequest;
-(id)initWithCompletionHandler:(Function<void (bool)>*)arg1 ;
@end

