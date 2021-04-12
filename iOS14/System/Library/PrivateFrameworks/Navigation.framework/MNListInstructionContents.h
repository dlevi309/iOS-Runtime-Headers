/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/MNInstructionContents.h>

@protocol GEOServerFormattedString;
@class NSArray, NSString, GEOComposedWaypoint;

@interface MNListInstructionContents : NSObject <MNInstructionContents> {

	double _distance;
	id<GEOServerFormattedString> _distanceFormat;
	NSArray* _instructionFormats;
	int _maneuverType;
	int _transportType;
	NSString* _intersectionName;
	NSString* _destinationName;
	NSString* _exitNumber;
	NSArray* _branchNames;
	NSArray* _towardNames;
	int _junctionAngle;
	BOOL _toFreeway;
	BOOL _suppressNames;
	BOOL _suppressFallback;
	NSString* _roadName;
	GEOComposedWaypoint* _destination;

}

@property (assign,nonatomic) int transportType;                                        //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) double distance;                                          //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> distanceFormat;              //@synthesize distanceFormat=_distanceFormat - In the implementation block
@property (nonatomic,retain) NSArray * instructionFormats;                             //@synthesize instructionFormats=_instructionFormats - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * destination;                        //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) NSString * destinationName;                               //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,readonly) long long context; 
@property (assign,nonatomic) BOOL suppressNames;                                       //@synthesize suppressNames=_suppressNames - In the implementation block
@property (nonatomic,retain) NSString * roadName;                                      //@synthesize roadName=_roadName - In the implementation block
@property (nonatomic,readonly) BOOL hasServerContent; 
@property (assign,nonatomic) BOOL suppressFallback;                                    //@synthesize suppressFallback=_suppressFallback - In the implementation block
+(id)contentsWithStep:(id)arg1 transportType:(int)arg2 ;
-(void)setDistance:(double)arg1 ;
-(void)setDestination:(GEOComposedWaypoint *)arg1 ;
-(id)init;
-(NSString *)roadName;
-(double)distance;
-(void)setTransportType:(int)arg1 ;
-(long long)context;
-(int)transportType;
-(id)description;
-(id)instruction;
-(void)setRoadName:(NSString *)arg1 ;
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
-(GEOComposedWaypoint *)destination;
-(void)_populateFromStep:(id)arg1 ;
-(void)setDistanceFormat:(id<GEOServerFormattedString>)arg1 ;
-(id)_instructionsForFormats:(id)arg1 ;
-(id)stringForDistance:(double)arg1 ;
-(id)instructionWithShorterAlternatives;
-(id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2 ;
-(BOOL)suppressNames;
-(void)setSuppressNames:(BOOL)arg1 ;
-(BOOL)hasServerContent;
-(BOOL)suppressFallback;
-(void)setSuppressFallback:(BOOL)arg1 ;
-(void)setInstructionFormats:(NSArray *)arg1 ;
-(NSArray *)instructionFormats;
-(id<GEOServerFormattedString>)distanceFormat;
@end

