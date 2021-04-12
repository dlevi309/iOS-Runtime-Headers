/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSUIWebModelInterface.h>

@class NSString;

@interface AMSUIWebActivityIndicatorModel : NSObject <AMSUIWebModelInterface> {

	BOOL _animate;

}

@property (assign,nonatomic) BOOL animate;                          //@synthesize animate=_animate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)animate;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(void)setAnimate:(BOOL)arg1 ;
@end

