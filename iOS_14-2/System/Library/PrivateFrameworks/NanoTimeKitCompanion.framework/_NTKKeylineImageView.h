/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKColoringImageView.h>
#import <libobjc.A.dylib/NTKKeylineView.h>

@class NTKKeylineTouchable, UIColor, NSString;

@interface _NTKKeylineImageView : NTKColoringImageView <NTKKeylineView> {

	NTKKeylineTouchable* touchable;
	/*^block*/id _colorizationBlock;

}

@property (nonatomic,copy) id colorizationBlock;                           //@synthesize colorizationBlock=_colorizationBlock - In the implementation block
@property (nonatomic,retain) NTKKeylineTouchable * touchable; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) BOOL usesLegibility; 
@property (nonatomic,retain) UIColor * overrideColor; 
@property (nonatomic,readonly) UIColor * contentColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setColor:(UIColor *)arg1 ;
-(void)setTouchable:(NTKKeylineTouchable *)arg1 ;
-(void)setColorizationBlock:(id)arg1 ;
-(NTKKeylineTouchable *)touchable;
-(id)colorizationBlock;
@end

