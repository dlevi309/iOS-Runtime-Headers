/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)openResourceOperationDidComplete:(id)arg1 ;
-(id)initWithOperation:(id)arg1 wrappedDelegate:(id)arg2 ;
-(void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2 ;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
@end

