/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/POPAnimatableProperty.h>

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
-(double)threshold;
-(id)writeBlock;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setThreshold:(double)arg1 ;
-(id)readBlock;
-(void)setReadBlock:(id)arg1 ;
-(void)setWriteBlock:(id)arg1 ;
@end

