/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/POPAnimatableProperty.h>

@class NSString;

@interface POPMutableAnimatableProperty : POPAnimatableProperty {

	NSString* name;
	/*^block*/id readBlock;
	/*^block*/id writeBlock;
	double threshold;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) id readBlock; 
@property (nonatomic,copy) id writeBlock; 
@property (assign,nonatomic) double threshold; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(double)threshold;
-(void)setThreshold:(double)arg1 ;
-(id)writeBlock;
-(id)readBlock;
-(void)setReadBlock:(id)arg1 ;
-(void)setWriteBlock:(id)arg1 ;
@end

