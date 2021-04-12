/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)index;
-(NPLocation *)location;
-(NSString *)label;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(void)resolveWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)probePending;
-(void)setProbePending:(BOOL)arg1 ;
-(NWEndpoint *)probeEndpoint;
-(NPWaldo *)parentWaldo;
-(void)setParentWaldo:(NPWaldo *)arg1 ;
-(NSDate *)lastUsed;
-(void)setLastUsed:(NSDate *)arg1 ;
-(id)initWithLabel:(id)arg1 index:(unsigned long long)arg2 onRampEndpoint:(id)arg3 probeEndpoint:(id)arg4 location:(id)arg5 ;
-(NSDictionary *)onRampLists;
-(NSDictionary *)currentOnRampIndexList;
-(NWEndpoint *)onRampEndpoint;
-(NWEndpoint *)savedEndpoint;
-(void)iterateOnRampsForAddressFamily:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)getOnRamp:(long long)arg1 addressFamily:(id)arg2 ;
-(void)setCurrentOnRampIndexList:(NSDictionary *)arg1 ;
-(long long)currentIndex:(id)arg1 ;
-(BOOL)reResolve;
-(void)setReResolve:(BOOL)arg1 ;
-(void)setSavedEndpoint:(NWEndpoint *)arg1 ;
-(id)unsynthesizeAddresses:(id)arg1 ;
-(id)getPortFromEndpoint:(id)arg1 defaultPort:(id)arg2 ;
-(void)setOnRampLists:(NSDictionary *)arg1 ;
-(id)getCurrentOnRamp:(id)arg1 ;
-(id)nextOnRampForLatency:(id)arg1 outIndex:(long long*)arg2 ;
-(void)setCurrentIndex:(long long)arg1 addressFamily:(id)arg2 ;
-(long long)compareByDistance:(id)arg1 ;
-(void)linkWithOnRampsRetainMissingAddressFamilies:(BOOL)arg1 ;
@end

