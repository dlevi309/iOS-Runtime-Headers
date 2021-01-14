/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/

#import <libobjc.A.dylib/CHHapticPlayable.h>

@class NSNumber, NSMutableArray, NSArray, NSString;

@interface CHHapticPattern : NSObject <CHHapticPlayable> {

	NSNumber* _version;
	NSMutableArray* _embeddedURLs;
	NSMutableArray* _events;
	NSMutableArray* _parameters;
	NSMutableArray* _parameterCurves;

}

@property (nonatomic,readonly) double duration; 
@property (readonly) NSArray * events; 
@property (readonly) NSArray * parameters; 
@property (readonly) NSArray * parameterCurves; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)addHapticsForWheelsOfTime:(id)arg1 ;
+(id)eventListFromEvents:(id)arg1 parameters:(id)arg2 parameterCurves:(id)arg3 engine:(id)arg4 privileged:(BOOL)arg5 ;
-(NSArray *)parameters;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSArray *)parameterCurves;
-(id)initWithEvents:(id)arg1 parameterCurves:(id)arg2 error:(id*)arg3 ;
-(id)initWithEvents:(id)arg1 parameters:(id)arg2 error:(id*)arg3 ;
-(id)resolveExternalResources:(id)arg1 error:(id*)arg2 ;
-(id)eventListFromDictionary:(id)arg1 error:(id*)arg2 ;
-(id)exportDictionaryAndReturnError:(id*)arg1 ;
-(NSArray *)events;
-(double)duration;
@end

