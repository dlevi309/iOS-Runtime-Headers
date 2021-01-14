/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)lines;
-(void)setLines:(NSArray *)arg1 ;
-(id)init;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setState:(long long)arg1 ;
-(long long)state;
@end

