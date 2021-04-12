/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/ETTask.h>

@class NSArray;

@interface ETTaskClassifier : ETTask {

	NSArray* _class_names;

}

@property (assign) NSArray * class_names;              //@synthesize class_names=_class_names - In the implementation block
-(id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 ;
-(id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 needWeightsInitialization:(BOOL)arg4 ;
-(NSArray *)class_names;
-(void)setClass_names:(NSArray *)arg1 ;
@end

