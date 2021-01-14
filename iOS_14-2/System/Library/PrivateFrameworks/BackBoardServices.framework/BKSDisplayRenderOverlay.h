/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)dismissActions;
+(id)existingOverlayForDisplay:(id)arg1 ;
-(void)freeze;
-(void)dismissWithAnimation:(id)arg1 ;
-(id)succinctDescription;
-(id)_descriptor;
-(id)initWithDescriptor:(id)arg1 ;
-(void)present;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BKSDisplayRenderOverlayDescriptor *)overlayDescriptor;
-(BOOL)lockBacklight;
-(NSString *)name;
-(NSString *)description;
-(long long)interfaceOrientation;
-(BKSDisplayProgressIndicatorProperties *)progressIndicatorProperties;
-(CADisplay *)display;
-(BOOL)isInterstitial;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dismiss;
@end

