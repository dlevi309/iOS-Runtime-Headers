/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@class NSString;

@interface CLSAggregate : NSObject {

	BOOL _allowWeeklyUpdates;
	NSString* _primaryDomain;

}

@property (nonatomic,readonly) BOOL allowWeeklyUpdates;              //@synthesize allowWeeklyUpdates=_allowWeeklyUpdates - In the implementation block
@property (nonatomic,retain) NSString * primaryDomain;               //@synthesize primaryDomain=_primaryDomain - In the implementation block
+(id)sharedCLSAggregate;
-(id)_allRegisteredKeys;
-(void)invalidateForWeeklyUpdates;
-(id)init;
-(id)_keysForWeeklyReporting;
-(id)_aggdMethodConstructionHints;
-(void)_recordAGGDValue:(id)arg1 forKey:(id)arg2 ;
-(id)_messageTracerMethodConstructionHints;
-(id)_aggdMethodConstructionHintsForKey:(id)arg1 ;
-(id)_doubleValueTypeKeys;
-(void)setPrimaryDomain:(NSString *)arg1 ;
-(id)_scalarToAddKeys;
-(id)_getSubdomain:(id)arg1 ;
-(void)incrementValueForKey:(id)arg1 ;
-(void)recordValue:(id)arg1 forKey:(id)arg2 ;
-(id)_needsParsingKeys;
-(BOOL)allowWeeklyUpdates;
-(void)_recordMessageTracerValue:(id)arg1 forKey:(id)arg2 ;
-(id)_registeredKeysLookupTable;
-(NSString *)primaryDomain;
-(id)_messageTracerMethodConstructionHintsForKey:(id)arg1 ;
-(id)_truncateToSignificantFigureForValue:(id)arg1 numOfSignificantDigits:(int)arg2 ;
-(id)_distributionKeys;
-(id)_stringValueTypeKeys;
@end

