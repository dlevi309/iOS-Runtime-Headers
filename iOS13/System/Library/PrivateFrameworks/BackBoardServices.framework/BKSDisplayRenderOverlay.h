/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BKSDisplayRenderOverlayDescribing.h>
#import <libobjc.A.dylib/BKSDisplayRenderOverlayDismissAction.h>

@class BKSDisplayRenderOverlayDescriptor, NSString, CADisplay, BKSDisplayProgressIndicatorProperties;

@interface BKSDisplayRenderOverlay : NSObject <BSDescriptionProviding, BKSDisplayRenderOverlayDescribing, BKSDisplayRenderOverlayDismissAction> {

	BKSDisplayRenderOverlayDescriptor* _descriptor;

}

@property (getter=_descriptor,nonatomic,readonly) BKSDisplayRenderOverlayDescriptor * descriptor;                //@synthesize descriptor=_descriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) CADisplay * display; 
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,readonly) BOOL lockBacklight; 
@property (nonatomic,readonly) BKSDisplayProgressIndicatorProperties * progressIndicatorProperties; 
@property (getter=isInterstitial,nonatomic,readonly) BOOL interstitial; 
@property (nonatomic,readonly) BKSDisplayRenderOverlayDescriptor * overlayDescriptor; 
+(id)existingOverlayForDisplay:(id)arg1 ;
+(id)dismissActions;
-(NSString *)description;
-(NSString *)name;
-(void)freeze;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_descriptor;
-(long long)interfaceOrientation;
-(void)dismiss;
-(void)present;
-(id)initWithDescriptor:(id)arg1 ;
-(CADisplay *)display;
-(void)dismissWithAnimation:(id)arg1 ;
-(BKSDisplayRenderOverlayDescriptor *)overlayDescriptor;
-(BOOL)lockBacklight;
-(BKSDisplayProgressIndicatorProperties *)progressIndicatorProperties;
-(BOOL)isInterstitial;
@end

