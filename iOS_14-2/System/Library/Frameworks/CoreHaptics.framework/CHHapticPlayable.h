/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/

@class NSArray;


@protocol CHHapticPlayable <NSObject>
@property (readonly) NSArray * events; 
@property (readonly) NSArray * parameters; 
@property (readonly) NSArray * parameterCurves; 
@property (readonly) double duration; 
@required
-(NSArray *)parameters;
-(NSArray *)parameterCurves;
-(id)resolveExternalResources:(id)arg1 error:(id*)arg2;
-(NSArray *)events;
-(double)duration;

@end

