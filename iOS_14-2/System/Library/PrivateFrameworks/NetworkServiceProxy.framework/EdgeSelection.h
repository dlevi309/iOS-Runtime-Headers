/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSNumber, NSMutableDictionary;

@interface EdgeSelection : NSObject <NSSecureCoding> {

	NSData* _networkSignature;
	NSNumber* _interfaceType;
	long long _trialCount;
	double _alpha;
	long long _windowSize;
	NSMutableDictionary* _edgeAttributesDict;

}

@property (nonatomic,retain) NSMutableDictionary * edgeAttributesDict;              //@synthesize edgeAttributesDict=_edgeAttributesDict - In the implementation block
@property (nonatomic,retain) NSData * networkSignature;                             //@synthesize networkSignature=_networkSignature - In the implementation block
@property (nonatomic,retain) NSNumber * interfaceType;                              //@synthesize interfaceType=_interfaceType - In the implementation block
@property (assign,nonatomic) long long trialCount;                                  //@synthesize trialCount=_trialCount - In the implementation block
@property (assign,nonatomic) double alpha;                                          //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) long long windowSize;                                  //@synthesize windowSize=_windowSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)interfaceType;
-(long long)windowSize;
-(double)alpha;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setWindowSize:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setInterfaceType:(NSNumber *)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(long long)trialCount;
-(NSData *)networkSignature;
-(NSMutableDictionary *)edgeAttributesDict;
-(double)_stochasticRewardFromRTT:(double)arg1 ;
-(void)setTrialCount:(long long)arg1 ;
-(id)initWithNetworkSignature:(id)arg1 interfaceType:(id)arg2 modelParams:(id)arg3 ;
-(void)trainEdgeSelectionModel:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getMinimumLatencyEdge:(/*^block*/id)arg1 ;
-(void)getAttributesForEdge:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setNetworkSignature:(NSData *)arg1 ;
-(void)setEdgeAttributesDict:(NSMutableDictionary *)arg1 ;
@end

