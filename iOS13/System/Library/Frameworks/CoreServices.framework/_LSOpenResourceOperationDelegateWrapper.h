/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <libobjc.A.dylib/LSOpenResourceOperationDelegate.h>

@protocol LSOpenResourceOperationDelegate;
@class NSOperation, NSString;

@interface _LSOpenResourceOperationDelegateWrapper : NSObject <LSOpenResourceOperationDelegate> {

	NSOperation* _operation;
	id<LSOpenResourceOperationDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOperation:(id)arg1 wrappedDelegate:(id)arg2 ;
-(void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2 ;
-(void)openResourceOperationDidComplete:(id)arg1 ;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
@end

