/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/LSOpenResourceOperationDelegate.h>

@class NSString;

@interface _SFOpenURLOperationDelegate : NSObject <LSOpenResourceOperationDelegate> {

	/*^block*/id _completionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)openResourceOperationDidComplete:(id)arg1 ;
-(void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2 ;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(void)_didFinishWithSuccess:(BOOL)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
@end

