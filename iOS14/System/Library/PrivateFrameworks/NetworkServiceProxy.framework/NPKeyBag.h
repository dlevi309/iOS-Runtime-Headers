/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/


@class NSArray, NSData, NSDictionary, NSPredicate;

@interface NPKeyBag : NSObject {

	unsigned _index;
	unsigned _generation;
	NSArray* _keys;
	long long _fallbackReason;
	NSData* _updateHash;
	long long _TFOStatusOverride;
	double _lastUsedTimestamp;
	NSDictionary* _onRampMap;
	NSArray* _onRampList;
	NSPredicate* _validOnRampPredicate;
	NSPredicate* _validOnRampWithTFOPredicate;

}

@property (retain) NSDictionary * onRampMap;                               //@synthesize onRampMap=_onRampMap - In the implementation block
@property (retain) NSArray * onRampList;                                   //@synthesize onRampList=_onRampList - In the implementation block
@property (retain) NSPredicate * validOnRampPredicate;                     //@synthesize validOnRampPredicate=_validOnRampPredicate - In the implementation block
@property (retain) NSPredicate * validOnRampWithTFOPredicate;              //@synthesize validOnRampWithTFOPredicate=_validOnRampWithTFOPredicate - In the implementation block
@property (nonatomic,retain) NSArray * keys;                               //@synthesize keys=_keys - In the implementation block
@property (assign) unsigned index;                                         //@synthesize index=_index - In the implementation block
@property (assign) long long fallbackReason;                               //@synthesize fallbackReason=_fallbackReason - In the implementation block
@property (assign,nonatomic) unsigned generation;                          //@synthesize generation=_generation - In the implementation block
@property (nonatomic,retain) NSData * updateHash;                          //@synthesize updateHash=_updateHash - In the implementation block
@property (assign,nonatomic) long long TFOStatusOverride;                  //@synthesize TFOStatusOverride=_TFOStatusOverride - In the implementation block
@property (assign,nonatomic) double lastUsedTimestamp;                     //@synthesize lastUsedTimestamp=_lastUsedTimestamp - In the implementation block
@property (readonly) double timeSinceLastUsed; 
-(void)setGeneration:(unsigned)arg1 ;
-(NSData *)updateHash;
-(void)setUpdateHash:(NSData *)arg1 ;
-(unsigned)index;
-(unsigned)generation;
-(NSArray *)keys;
-(id)init;
-(long long)fallbackReason;
-(long long)TFOStatusOverride;
-(void)createOnRamps;
-(void)setIndex:(unsigned)arg1 ;
-(void)setValidOnRampPredicate:(NSPredicate *)arg1 ;
-(void)moveToNextOnRamp;
-(id)initWithData:(id)arg1 ;
-(void)setKeys:(NSArray *)arg1 ;
-(void)removeIPv6Keys;
-(NSPredicate *)validOnRampWithTFOPredicate;
-(NSDictionary *)onRampMap;
-(void)setOnRampList:(NSArray *)arg1 ;
-(id)getOnRampForEndpoint:(id)arg1 ;
-(void)setValidOnRampWithTFOPredicate:(NSPredicate *)arg1 ;
-(id)data;
-(void)setFallbackReason:(long long)arg1 ;
-(NSPredicate *)validOnRampPredicate;
-(void)setOnRampMap:(NSDictionary *)arg1 ;
-(void)setTFOStatusOverride:(long long)arg1 ;
-(double)lastUsedTimestamp;
-(void)logWithMessage:(id)arg1 identifier:(id)arg2 ;
-(id)initWithOnRamps:(id)arg1 currentNetworkInfo:(id)arg2 currentEdgeIndex:(long long)arg3 currentEdgeList:(id)arg4 generation:(unsigned)arg5 identifier:(id)arg6 updateHash:(id)arg7 ;
-(NSArray *)onRampList;
-(id)copyUsableOnRamps:(BOOL)arg1 requireTFO:(BOOL)arg2 ;
-(void)setLastUsedTimestamp:(double)arg1 ;
-(double)timeSinceLastUsed;
-(void)moveToOnRamp:(id)arg1 ;
-(BOOL)updateHashMatchesEdgeSet:(id)arg1 ;
@end

