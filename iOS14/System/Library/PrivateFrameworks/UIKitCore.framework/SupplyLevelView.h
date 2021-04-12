/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)colors;
-(void)setColors:(NSArray *)arg1 ;
-(BOOL)isOpaque;
-(int)supplyLevel;
-(void)setSupplyLevel:(int)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end

