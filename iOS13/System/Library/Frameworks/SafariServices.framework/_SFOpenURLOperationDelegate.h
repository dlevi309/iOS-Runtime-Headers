/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2 ;
-(void)openResourceOperationDidComplete:(id)arg1 ;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_didFinishWithSuccess:(BOOL)arg1 ;
@end

