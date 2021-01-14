/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <libobjc.A.dylib/RBSAssertionObserving.h>

@class NSString;

@interface WKRBSAssertionDelegate : NSObject <RBSAssertionObserving> {

	/*^block*/id _invalidationCallback;

}

@property (copy) id invalidationCallback;                           //@synthesize invalidationCallback=_invalidationCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assertion:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)assertionWillInvalidate:(id)arg1 ;
-(void)setInvalidationCallback:(id)arg1 ;
-(id)invalidationCallback;
-(void)dealloc;
@end

