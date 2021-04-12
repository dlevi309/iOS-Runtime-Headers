/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>

@protocol SXLayoutInvalidator;
@interface SXDebugComponentView : SXComponentView {

	id<SXLayoutInvalidator> _invalidator;

}

@property (nonatomic,readonly) id<SXLayoutInvalidator> invalidator;              //@synthesize invalidator=_invalidator - In the implementation block
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(void)loadComponent:(id)arg1 ;
-(id<SXLayoutInvalidator>)invalidator;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 invalidator:(id)arg5 ;
@end

