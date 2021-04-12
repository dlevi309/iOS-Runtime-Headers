/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/_DKQuery.h>
#import <libobjc.A.dylib/_DKExecutableQuery.h>

@class _DKEventStream, NSDateInterval, NSString, NSPredicate, NSArray;

@interface _DKHistogramQuery : _DKQuery <_DKExecutableQuery> {

	BOOL _includeLocalResults;
	BOOL _includeRemoteResults;
	_DKEventStream* _stream;
	NSDateInterval* _interval;
	/*^block*/id _histogramHandler;
	NSString* _customIdentifier;
	unsigned long long _minimumOccurrencesForInclusion;
	NSPredicate* _predicate;
	NSArray* _valueKeyPaths;
	long long _remoteHistogramLimit;

}

@property (assign,nonatomic) BOOL includeLocalResults;                                       //@synthesize includeLocalResults=_includeLocalResults - In the implementation block
@property (assign,nonatomic) BOOL includeRemoteResults;                                      //@synthesize includeRemoteResults=_includeRemoteResults - In the implementation block
@property (assign,nonatomic) unsigned long long minimumOccurrencesForInclusion;              //@synthesize minimumOccurrencesForInclusion=_minimumOccurrencesForInclusion - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                                        //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * valueKeyPaths;                                        //@synthesize valueKeyPaths=_valueKeyPaths - In the implementation block
@property (assign,nonatomic) long long remoteHistogramLimit;                                 //@synthesize remoteHistogramLimit=_remoteHistogramLimit - In the implementation block
@property (nonatomic,readonly) _DKEventStream * stream; 
@property (nonatomic,readonly) NSDateInterval * interval; 
@property (nonatomic,copy) id histogramHandler;                                              //@synthesize histogramHandler=_histogramHandler - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)histogramQueryForStream:(id)arg1 interval:(id)arg2 ;
+(id)histogramQueryForStream:(id)arg1 interval:(id)arg2 withPredicate:(id)arg3 ;
+(id)histogramQueryForStream:(id)arg1 interval:(id)arg2 predicate:(id)arg3 valueKeyPaths:(id)arg4 ;
+(id)histogramQueryForPersistedHistogramsForStream:(id)arg1 withCustomIdentifier:(id)arg2 ;
-(_DKEventStream *)stream;
-(id)handleResults:(id)arg1 error:(id)arg2 ;
-(id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2 ;
-(NSPredicate *)predicate;
-(id)init;
-(NSDateInterval *)interval;
-(long long)remoteHistogramLimit;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSArray *)valueKeyPaths;
-(id)histogramHandler;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)includeRemoteResults;
-(void)setValueKeyPaths:(NSArray *)arg1 ;
-(id)description;
-(void)setIncludeLocalResults:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRemoteHistogramLimit:(long long)arg1 ;
-(void)setMinimumOccurrencesForInclusion:(unsigned long long)arg1 ;
-(void)setIncludeRemoteResults:(BOOL)arg1 ;
-(BOOL)includeLocalResults;
-(unsigned long long)minimumOccurrencesForInclusion;
-(void)setHistogramHandler:(id)arg1 ;
@end

