/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/

@class NSArray;


@protocol CHHapticPlayable <NSObject>
@property (readonly) NSArray * events; 
@property (readonly) NSArray * parameters; 
@property (readonly) NSArray * parameterCurves; 
@property (readonly) double duration; 
@required
-(double)duration;
-(NSArray *)parameters;
-(NSArray *)events;
-(BOOL)resolveExternalResources:(id)arg1 error:(id*)arg2;
-(NSArray *)parameterCurves;

@end

