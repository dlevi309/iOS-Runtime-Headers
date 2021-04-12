/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKColoringImageView.h>
#import <libobjc.A.dylib/NTKKeylineView.h>

@class NTKKeylineTouchable, NSString, UIColor;

@interface _NTKKeylineImageView : NTKColoringImageView <NTKKeylineView> {

	NTKKeylineTouchable* touchable;
	/*^block*/id _colorizationBlock;

}

@property (nonatomic,copy) id colorizationBlock;                           //@synthesize colorizationBlock=_colorizationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) BOOL usesLegibility; 
@property (nonatomic,retain) UIColor * overrideColor; 
@property (nonatomic,readonly) UIColor * contentColor; 
@property (nonatomic,retain) NTKKeylineTouchable * touchable; 
-(void)setColor:(UIColor *)arg1 ;
-(void)setTouchable:(NTKKeylineTouchable *)arg1 ;
-(void)setColorizationBlock:(id)arg1 ;
-(NTKKeylineTouchable *)touchable;
-(id)colorizationBlock;
@end

