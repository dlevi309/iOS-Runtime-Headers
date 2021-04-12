/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKColoringView.h>
#import <libobjc.A.dylib/NTKKeylineView.h>

@class NTKKeylineTouchable, UIBezierPath, NSString, UIColor;

@interface _NTKKeylinePathView : NTKColoringView <NTKKeylineView> {

	UIBezierPath* _path;
	UIBezierPath* _secondPath;
	NTKKeylineTouchable* touchable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) BOOL usesLegibility; 
@property (nonatomic,retain) UIColor * overrideColor; 
@property (nonatomic,readonly) UIColor * contentColor; 
@property (nonatomic,retain) NTKKeylineTouchable * touchable; 
-(id)initWithPath:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTouchable:(NTKKeylineTouchable *)arg1 ;
-(id)initWithPath:(id)arg1 secondPath:(id)arg2 ;
-(NTKKeylineTouchable *)touchable;
@end

