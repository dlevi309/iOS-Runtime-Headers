/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/ETTask.h>

@class NSArray;

@interface ETTaskClassifier : ETTask {

	NSArray* _class_names;

}

@property (assign) NSArray * class_names;              //@synthesize class_names=_class_names - In the implementation block
-(id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 needWeightsInitialization:(BOOL)arg4 ;
-(id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 ;
-(NSArray *)class_names;
-(void)setClass_names:(NSArray *)arg1 ;
@end

