/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NTKFaceViewComplicationFactory.h>

@protocol NTKUtilityFlatComplicationViewDelegate;
@class NTKFaceView, CLKDevice, NSString;

@interface NTKSimpleTextFaceViewComplicationFactory : NSObject <NTKFaceViewComplicationFactory> {

	NTKFaceView*<NTKUtilityFlatComplicationViewDelegate> _faceView;
	CLKDevice* _device;

}

@property (nonatomic,retain) CLKDevice * device;                                                                //@synthesize device=_device - In the implementation block
@property (assign,nonatomic,__weak) NTKFaceView*<NTKUtilityFlatComplicationViewDelegate> faceView;              //@synthesize faceView=_faceView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CLKDevice *)device;
-(CGRect)_referenceFrame;
-(void)setDevice:(CLKDevice *)arg1 ;
-(NTKFaceView*<NTKUtilityFlatComplicationViewDelegate>)faceView;
-(long long)complicationPickerStyleForSlot:(id)arg1 ;
-(void)configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(id)pickerMaskForSlot:(id)arg1 ;
-(unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(id)keylineViewForComplicationSlot:(id)arg1 ;
-(void)loadLayoutRules;
-(id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(void)setFaceView:(NTKFaceView*<NTKUtilityFlatComplicationViewDelegate>)arg1 ;
@end

