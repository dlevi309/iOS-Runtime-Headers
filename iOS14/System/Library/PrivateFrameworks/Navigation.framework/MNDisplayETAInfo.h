/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSUUID;

@interface MNDisplayETAInfo : NSObject <NSSecureCoding> {

	unsigned long long _displayRemainingMinutesToEndOfLeg;
	unsigned long long _displayRemainingMinutesToEndOfRoute;
	NSDate* _displayETAToEndOfLeg;
	NSDate* _displayETAToEndOfRoute;
	NSUUID* _routeID;
	unsigned long long _legIndex;

}

@property (assign,nonatomic) unsigned long long displayRemainingMinutesToEndOfLeg;                //@synthesize displayRemainingMinutesToEndOfLeg=_displayRemainingMinutesToEndOfLeg - In the implementation block
@property (nonatomic,retain) NSDate * displayETAToEndOfLeg;                                       //@synthesize displayETAToEndOfLeg=_displayETAToEndOfLeg - In the implementation block
@property (assign,nonatomic) unsigned long long displayRemainingMinutesToEndOfRoute;              //@synthesize displayRemainingMinutesToEndOfRoute=_displayRemainingMinutesToEndOfRoute - In the implementation block
@property (nonatomic,retain) NSDate * displayETAToEndOfRoute;                                     //@synthesize displayETAToEndOfRoute=_displayETAToEndOfRoute - In the implementation block
@property (nonatomic,retain) NSUUID * routeID;                                                    //@synthesize routeID=_routeID - In the implementation block
@property (assign,nonatomic) unsigned long long legIndex;                                         //@synthesize legIndex=_legIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)routeID;
-(id)description;
-(unsigned long long)legIndex;
-(id)initWithCoder:(id)arg1 ;
-(void)setRouteID:(NSUUID *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)displayRemainingMinutesToEndOfRoute;
-(NSDate *)displayETAToEndOfRoute;
-(unsigned long long)displayRemainingMinutesToEndOfLeg;
-(id)initWithDisplayETAToEndOfLeg:(id)arg1 displayRemainingMinutesToEndOfLeg:(unsigned long long)arg2 displayETAToEndOfRoute:(id)arg3 displayRemainingMinutesToEndOfRoute:(unsigned long long)arg4 ;
-(NSDate *)displayETAToEndOfLeg;
-(id)initWithDisplayETAToEndOfLeg:(id)arg1 displayRemainingMinutesToEndOfLeg:(unsigned long long)arg2 forLegIndex:(unsigned long long)arg3 displayETAToEndOfRoute:(id)arg4 displayRemainingMinutesToEndOfRoute:(unsigned long long)arg5 forRouteID:(id)arg6 ;
-(void)setDisplayETAToEndOfLeg:(NSDate *)arg1 ;
-(void)setDisplayRemainingMinutesToEndOfLeg:(unsigned long long)arg1 ;
-(void)setDisplayETAToEndOfRoute:(NSDate *)arg1 ;
-(void)setDisplayRemainingMinutesToEndOfRoute:(unsigned long long)arg1 ;
-(BOOL)_isDisplayDate:(id)arg1 equalToDisplayDate:(id)arg2 ;
-(void)setLegIndex:(unsigned long long)arg1 ;
@end

