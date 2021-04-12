/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/

#import <libobjc.A.dylib/CHHapticPlayable.h>

@class NSNumber, NSMutableArray, NSString, NSArray;

@interface CHHapticPattern : NSObject <CHHapticPlayable> {

	NSNumber* _version;
	NSMutableArray* _embeddedURLs;
	NSMutableArray* _events;
	NSMutableArray* _parameters;
	NSMutableArray* _parameterCurves;

}

@property (nonatomic,readonly) double duration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * events; 
@property (readonly) NSArray * parameters; 
@property (readonly) NSArray * parameterCurves; 
+(id)eventListFromEvents:(id)arg1 parameters:(id)arg2 parameterCurves:(id)arg3 engine:(id)arg4 privileged:(BOOL)arg5 ;
-(id)init;
-(double)duration;
-(NSArray *)parameters;
-(NSArray *)events;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)initWithEvents:(id)arg1 parameters:(id)arg2 error:(id*)arg3 ;
-(BOOL)resolveExternalResources:(id)arg1 error:(id*)arg2 ;
-(NSArray *)parameterCurves;
-(id)initWithEvents:(id)arg1 parameterCurves:(id)arg2 error:(id*)arg3 ;
-(id)exportDictionaryAndReturnError:(id*)arg1 ;
-(id)eventListFromDictionary:(id)arg1 error:(id*)arg2 ;
@end

