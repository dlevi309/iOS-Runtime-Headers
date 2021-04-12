/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)incrementValueForKey:(id)arg1 ;
-(void)recordValue:(id)arg1 forKey:(id)arg2 ;
-(void)invalidateForWeeklyUpdates;
-(id)_allRegisteredKeys;
-(id)_registeredKeysLookupTable;
-(id)_distributionKeys;
-(id)_scalarToAddKeys;
-(id)_needsParsingKeys;
-(id)_stringValueTypeKeys;
-(id)_doubleValueTypeKeys;
-(id)_getSubdomain:(id)arg1 ;
-(id)_aggdMethodConstructionHints;
-(id)_messageTracerMethodConstructionHints;
-(void)_recordAGGDValue:(id)arg1 forKey:(id)arg2 ;
-(void)_recordMessageTracerValue:(id)arg1 forKey:(id)arg2 ;
-(id)_aggdMethodConstructionHintsForKey:(id)arg1 ;
-(id)_messageTracerMethodConstructionHintsForKey:(id)arg1 ;
-(id)_truncateToSignificantFigureForValue:(id)arg1 numOfSignificantDigits:(int)arg2 ;
-(id)_keysForWeeklyReporting;
-(NSString *)primaryDomain;
-(void)setPrimaryDomain:(NSString *)arg1 ;
-(BOOL)allowWeeklyUpdates;
@end

