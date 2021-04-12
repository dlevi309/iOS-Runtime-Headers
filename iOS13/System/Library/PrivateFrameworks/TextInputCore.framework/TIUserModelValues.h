/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TIUserModelValuesProtocol.h>

@protocol TIUserModelDataStoring;
@class NSString, TICAnalyticsMetricsKey, NSMutableDictionary;

@interface TIUserModelValues : NSObject <TIUserModelValuesProtocol> {

	NSString* _inputMode;
	id<TIUserModelDataStoring> _userModelStore;
	TICAnalyticsMetricsKey* _context;
	NSMutableDictionary* _featureDescriptors;
	NSMutableDictionary* _numericValueDescriptors;
	NSMutableDictionary* _settingsValueDescriptors;
	NSMutableDictionary* _durableCounters;
	NSMutableDictionary* _transientCounters;
	NSMutableDictionary* _stringValues;
	NSMutableDictionary* _settingsDictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)featureUsage:(id)arg1 userModel:(id)arg2 ;
-(id)counterValue:(id)arg1 ;
-(id)counterValueWithWordLength:(id)arg1 ;
-(id)stringValue:(id)arg1 ;
-(BOOL)settingsBoolValue:(id)arg1 ;
-(id)initWithInputMode:(id)arg1 context:(id)arg2 userModelDataStore:(id)arg3 durableCounters:(id)arg4 settingsDictionary:(id)arg5 ;
-(void)updateCounterValue:(id)arg1 index:(int)arg2 forKey:(id)arg3 ;
-(id)floatingKeyboardUsage:(id)arg1 ;
-(float)numeratorFromFeatureDescriptor:(id)arg1 ;
-(float)denominatorFromFeatureDescriptor:(id)arg1 ;
-(float)valueFromNumerator:(float)arg1 andDenominator:(float)arg2 ;
-(id)featureStateFromFeatureDescriptor:(id)arg1 andValue:(double)arg2 ;
-(id)calcTypingSpeed;
-(int)calculateReportingIndexFromInternalIndex:(int)arg1 ;
-(void)persistForDate:(id)arg1 ;
-(id)getTransientCounterForKey:(id)arg1 ;
-(void)addValue:(int)arg1 toCounterWithKey:(id)arg2 andCandidateLength:(int)arg3 ;
-(void)addNumber:(id)arg1 toCounterWithKey:(id)arg2 andCandidateLength:(int)arg3 ;
-(void)addToTransientCounterFromDatabaseEntry:(id)arg1 ;
@end

