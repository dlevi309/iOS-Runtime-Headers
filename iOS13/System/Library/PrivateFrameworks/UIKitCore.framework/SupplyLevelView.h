/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface SupplyLevelView : UIView {

	int supplyLevel;
	NSArray* colors;

}

@property (assign,nonatomic) int supplyLevel; 
@property (nonatomic,retain) NSArray * colors; 
-(BOOL)isOpaque;
-(void)setColors:(NSArray *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(NSArray *)colors;
-(int)supplyLevel;
-(void)setSupplyLevel:(int)arg1 ;
@end

