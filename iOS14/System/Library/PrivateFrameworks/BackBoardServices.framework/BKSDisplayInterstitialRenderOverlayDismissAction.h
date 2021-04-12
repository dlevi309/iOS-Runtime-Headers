/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BKSDisplayRenderOverlayDismissAction.h>

@class BKSDisplayRenderOverlayDescriptor, NSString;

@interface BKSDisplayInterstitialRenderOverlayDismissAction : NSObject <BSDescriptionProviding, BKSDisplayRenderOverlayDismissAction> {

	BKSDisplayRenderOverlayDescriptor* _overlayDescriptor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BKSDisplayRenderOverlayDescriptor * overlayDescriptor; 
-(void)dismissWithAnimation:(id)arg1 ;
-(id)succinctDescription;
-(id)initWithDescriptor:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BKSDisplayRenderOverlayDescriptor *)overlayDescriptor;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dismiss;
@end

