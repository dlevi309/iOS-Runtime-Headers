/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, CLLocation;

@interface MapsSuggestionsETA : NSObject <NSSecureCoding, NSCopying> {

	int _transportType;
	double _seconds;
	NSString* _shortTrafficString;
	NSString* _longTrafficString;
	NSDate* _time;
	CLLocation* _location;
	NSString* _originator;

}

@property (nonatomic,readonly) double seconds;                             //@synthesize seconds=_seconds - In the implementation block
@property (nonatomic,readonly) NSString * shortTrafficString;              //@synthesize shortTrafficString=_shortTrafficString - In the implementation block
@property (nonatomic,readonly) NSString * longTrafficString;               //@synthesize longTrafficString=_longTrafficString - In the implementation block
@property (nonatomic,readonly) int transportType;                          //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) NSDate * time;                              //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                      //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSString * originator;                      //@synthesize originator=_originator - In the implementation block
@property (nonatomic,readonly) double age; 
+(BOOL)supportsSecureCoding;
+(id)ETAWithData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)data;
-(NSDate *)time;
-(double)seconds;
-(CLLocation *)location;
-(int)transportType;
-(double)age;
-(NSString *)shortTrafficString;
-(NSString *)longTrafficString;
-(NSString *)originator;
-(id)initWithSeconds:(double)arg1 shortTrafficString:(id)arg2 longTrafficString:(id)arg3 transportType:(int)arg4 location:(id)arg5 time:(id)arg6 ;
-(id)trafficString;
-(id)initWithSeconds:(double)arg1 shortTrafficString:(id)arg2 longTrafficString:(id)arg3 transportType:(int)arg4 location:(id)arg5 time:(id)arg6 originator:(id)arg7 ;
-(BOOL)isEqualToETA:(id)arg1 ;
-(BOOL)isValidForLocation:(id)arg1 requirements:(id)arg2 ;
-(id)initWithSeconds:(double)arg1 trafficString:(id)arg2 transportType:(int)arg3 location:(id)arg4 ;
-(BOOL)isBetterThanETA:(id)arg1 requirements:(id)arg2 ;
@end

