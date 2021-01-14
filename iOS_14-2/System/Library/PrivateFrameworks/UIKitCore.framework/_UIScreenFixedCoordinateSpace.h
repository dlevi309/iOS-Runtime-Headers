/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UICoordinateSpace.h>

@class UIScreen, NSString;

@interface _UIScreenFixedCoordinateSpace : NSObject <UICoordinateSpace> {

	UIScreen* _screen;

}

@property (assign,setter=_setScreen:,nonatomic) UIScreen * _screen;              //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)bounds;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(void)_setScreen:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(UIScreen *)_screen;
@end

