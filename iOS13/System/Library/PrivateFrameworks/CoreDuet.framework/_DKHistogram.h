/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDateInterval, NSUUID, NSString, _DKEventStream, NSArray, NSDictionary;

@interface _DKHistogram : NSObject <NSSecureCoding> {

	NSMutableDictionary* _histogram;
	unsigned long long _countOverAllValues;
	NSDateInterval* _interval;
	NSUUID* _identifier;
	NSString* _customIdentifier;
	_DKEventStream* _stream;
	NSArray* _deviceIdentifiers;

}

@property (nonatomic,retain) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * customIdentifier;                        //@synthesize customIdentifier=_customIdentifier - In the implementation block
@property (nonatomic,retain) NSDateInterval * interval;                          //@synthesize interval=_interval - In the implementation block
@property (nonatomic,retain) NSDictionary * histogram;                           //@synthesize histogram=_histogram - In the implementation block
@property (assign,nonatomic) unsigned long long countOverAllValues;              //@synthesize countOverAllValues=_countOverAllValues - In the implementation block
@property (nonatomic,retain) _DKEventStream * stream;                            //@synthesize stream=_stream - In the implementation block
@property (nonatomic,retain) NSArray * deviceIdentifiers;                        //@synthesize deviceIdentifiers=_deviceIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)entityName;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSDateInterval *)interval;
-(void)setInterval:(NSDateInterval *)arg1 ;
-(_DKEventStream *)stream;
-(NSString *)customIdentifier;
-(void)setCustomIdentifier:(NSString *)arg1 ;
-(id)countDictionary;
-(NSDictionary *)histogram;
-(NSArray *)deviceIdentifiers;
-(void)_addPropertiesFrom:(id)arg1 ;
-(double)countForValueDouble:(id)arg1 ;
-(unsigned long long)countForValue:(id)arg1 ;
-(unsigned long long)countOverAllValues;
-(id)initWithHistogram:(id)arg1 ;
-(void)setDeviceIdentifiers:(NSArray *)arg1 ;
-(void)setStream:(_DKEventStream *)arg1 ;
-(id)initWithValues:(id)arg1 ;
-(double)relativeFrequencyForValue:(id)arg1 ;
-(void)addValue:(id)arg1 ;
-(void)addValue:(id)arg1 withCount:(double)arg2 ;
-(void)subtractValue:(id)arg1 ;
-(void)addHistogram:(id)arg1 ;
-(void)addHistogram:(id)arg1 decayingExistingCounts:(double)arg2 ;
-(void)subtractHistogram:(id)arg1 ;
-(void)setHistogram:(NSDictionary *)arg1 ;
-(void)setCountOverAllValues:(unsigned long long)arg1 ;
-(id)insertInManagedObjectContext:(id)arg1 ;
-(id)initWithManagedObject:(id)arg1 ;
@end

