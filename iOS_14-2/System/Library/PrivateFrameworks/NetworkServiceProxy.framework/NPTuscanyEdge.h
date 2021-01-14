/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NPLocation, NSDictionary, NWEndpoint, NSDate, NPWaldo;

@interface NPTuscanyEdge : NSObject <NSSecureCoding> {

	BOOL _probePending;
	BOOL _reResolve;
	NSString* _label;
	unsigned long long _index;
	NPLocation* _location;
	double _distance;
	NSDictionary* _onRampLists;
	NSDictionary* _currentOnRampIndexList;
	NWEndpoint* _probeEndpoint;
	NWEndpoint* _onRampEndpoint;
	NSDate* _lastUsed;
	NPWaldo* _parentWaldo;
	NWEndpoint* _savedEndpoint;

}

@property (retain) NSDictionary * onRampLists;                         //@synthesize onRampLists=_onRampLists - In the implementation block
@property (retain) NSDictionary * currentOnRampIndexList;              //@synthesize currentOnRampIndexList=_currentOnRampIndexList - In the implementation block
@property (readonly) NWEndpoint * probeEndpoint;                       //@synthesize probeEndpoint=_probeEndpoint - In the implementation block
@property (readonly) NWEndpoint * onRampEndpoint;                      //@synthesize onRampEndpoint=_onRampEndpoint - In the implementation block
@property (retain) NSDate * lastUsed;                                  //@synthesize lastUsed=_lastUsed - In the implementation block
@property (__weak) NPWaldo * parentWaldo;                              //@synthesize parentWaldo=_parentWaldo - In the implementation block
@property (retain) NWEndpoint * savedEndpoint;                         //@synthesize savedEndpoint=_savedEndpoint - In the implementation block
@property (assign) BOOL reResolve;                                     //@synthesize reResolve=_reResolve - In the implementation block
@property (readonly) NSString * label;                                 //@synthesize label=_label - In the implementation block
@property (assign) unsigned long long index;                           //@synthesize index=_index - In the implementation block
@property (readonly) NPLocation * location;                            //@synthesize location=_location - In the implementation block
@property (assign) double distance;                                    //@synthesize distance=_distance - In the implementation block
@property (assign) BOOL probePending;                                  //@synthesize probePending=_probePending - In the implementation block
+(BOOL)supportsSecureCoding;
-(NPWaldo *)parentWaldo;
-(id)unsynthesizeAddresses:(id)arg1 ;
-(unsigned long long)index;
-(void)setDistance:(double)arg1 ;
-(void)setParentWaldo:(NPWaldo *)arg1 ;
-(id)getOnRamp:(long long)arg1 addressFamily:(id)arg2 ;
-(void)setLastUsed:(NSDate *)arg1 ;
-(id)initWithLabel:(id)arg1 index:(unsigned long long)arg2 onRampEndpoint:(id)arg3 probeEndpoint:(id)arg4 location:(id)arg5 ;
-(double)distance;
-(id)getCurrentOnRamp:(id)arg1 ;
-(NWEndpoint *)savedEndpoint;
-(NPLocation *)location;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)compareByDistance:(id)arg1 ;
-(void)setSavedEndpoint:(NWEndpoint *)arg1 ;
-(void)setReResolve:(BOOL)arg1 ;
-(NSDate *)lastUsed;
-(NSDictionary *)onRampLists;
-(void)setProbePending:(BOOL)arg1 ;
-(BOOL)reResolve;
-(id)description;
-(NWEndpoint *)onRampEndpoint;
-(void)linkWithOnRampsRetainMissingAddressFamilies:(BOOL)arg1 ;
-(id)nextOnRampForLatency:(id)arg1 outIndex:(long long*)arg2 ;
-(void)resolveWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)getPortFromEndpoint:(id)arg1 defaultPort:(id)arg2 ;
-(NSDictionary *)currentOnRampIndexList;
-(void)setCurrentIndex:(long long)arg1 addressFamily:(id)arg2 ;
-(BOOL)probePending;
-(NWEndpoint *)probeEndpoint;
-(void)setCurrentOnRampIndexList:(NSDictionary *)arg1 ;
-(long long)currentIndex:(id)arg1 ;
-(void)setOnRampLists:(NSDictionary *)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(void)iterateOnRampsForAddressFamily:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

