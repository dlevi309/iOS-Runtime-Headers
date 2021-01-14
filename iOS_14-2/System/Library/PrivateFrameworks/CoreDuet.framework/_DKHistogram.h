/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)entityName;
+(BOOL)supportsSecureCoding;
-(_DKEventStream *)stream;
-(void)addValue:(id)arg1 ;
-(void)subtractValue:(id)arg1 ;
-(void)setStream:(_DKEventStream *)arg1 ;
-(void)setInterval:(NSDateInterval *)arg1 ;
-(double)relativeFrequencyForValue:(id)arg1 ;
-(NSDictionary *)histogram;
-(id)init;
-(NSDateInterval *)interval;
-(double)countForValueDouble:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)insertInManagedObjectContext:(id)arg1 ;
-(void)setHistogram:(NSDictionary *)arg1 ;
-(void)_addPropertiesFrom:(id)arg1 ;
-(void)setDeviceIdentifiers:(NSArray *)arg1 ;
-(unsigned long long)countForValue:(id)arg1 ;
-(unsigned long long)countOverAllValues;
-(id)description;
-(void)addValue:(id)arg1 withCount:(double)arg2 ;
-(void)subtractHistogram:(id)arg1 ;
-(id)countDictionary;
-(NSString *)customIdentifier;
-(id)initWithValues:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCustomIdentifier:(NSString *)arg1 ;
-(void)setCountOverAllValues:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(id)initWithManagedObject:(id)arg1 ;
-(void)addHistogram:(id)arg1 ;
-(void)addHistogram:(id)arg1 decayingExistingCounts:(double)arg2 ;
-(id)initWithHistogram:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)deviceIdentifiers;
@end

