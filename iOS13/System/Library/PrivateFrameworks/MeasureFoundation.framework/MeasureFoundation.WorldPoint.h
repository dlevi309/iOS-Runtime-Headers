/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MeasureFoundation.framework/MeasureFoundation
*/

#import <MeasureFoundation/MeasureFoundation.MeasureObject.h>

@class NSArray;

@interface MeasureFoundation.WorldPoint : MeasureFoundation.MeasureObject {

	 lines;
	 parentLine;
	 snapLine;
	 partOfRectangleId;
	 delegate;
	 anchor;
	 triangulationAnchor;
	 type;

}

@property (copy,nonatomic) NSArray * lines; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long state; 
-(id)init;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSArray *)lines;
-(void)setLines:(NSArray *)arg1 ;
@end

