/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


@class NSArray;

@interface SACallTree : NSObject {

	NSArray* _rootFrames;

}

@property (readonly) NSArray * rootFrames;              //@synthesize rootFrames=_rootFrames - In the implementation block
-(id)initWithRootFrames:(id)arg1 ;
-(void)enumerateCallTreeFrames:(/*^block*/id)arg1 ;
-(NSArray *)rootFrames;
@end

