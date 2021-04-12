/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <MapsSuggestions/MapsSuggestionsJSONable.h>

@class NSString, NSDate, CLLocation;

@interface MapsSuggestionsETA : NSObject <NSSecureCoding, NSCopying, MapsSuggestionsJSONable> {

	int _transportType;
	double _seconds;
	NSString* _shortTrafficString;
	NSString* _longTrafficString;
	NSString* _writtenRouteName;
	NSString* _spokenRouteName;
	NSDate* _time;
	CLLocation* _location;
	NSString* _originator;

}

@property (nonatomic,readonly) double seconds;                             //@synthesize seconds=_seconds - In the implementation block
@property (nonatomic,readonly) NSString * shortTrafficString;              //@synthesize shortTrafficString=_shortTrafficString - In the implementation block
@property (nonatomic,readonly) NSString * longTrafficString;               //@synthesize longTrafficString=_longTrafficString - In the implementation block
@property (nonatomic,readonly) NSString * writtenRouteName;                //@synthesize writtenRouteName=_writtenRouteName - In the implementation block
@property (nonatomic,readonly) NSString * spokenRouteName;                 //@synthesize spokenRouteName=_spokenRouteName - In the implementation block
@property (nonatomic,readonly) int transportType;                          //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) NSDate * time;                              //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                      //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSString * originator;                      //@synthesize originator=_originator - In the implementation block
@property (nonatomic,readonly) double age; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)ETAWithData:(id)arg1 ;
-(double)seconds;
-(NSDate *)time;
-(CLLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(int)transportType;
-(id)initWithSeconds:(double)arg1 shortTrafficString:(id)arg2 longTrafficString:(id)arg3 writtenRouteName:(id)arg4 spokenRouteName:(id)arg5 transportType:(int)arg6 location:(id)arg7 time:(id)arg8 ;
-(id)trafficString;
-(NSString *)shortTrafficString;
-(NSString *)longTrafficString;
-(NSString *)description;
-(NSString *)writtenRouteName;
-(NSString *)spokenRouteName;
-(id)data;
-(id)initWithSeconds:(double)arg1 shortTrafficString:(id)arg2 longTrafficString:(id)arg3 writtenRouteName:(id)arg4 spokenRouteName:(id)arg5 transportType:(int)arg6 location:(id)arg7 time:(id)arg8 originator:(id)arg9 ;
-(BOOL)isEqualToETA:(id)arg1 ;
-(BOOL)isValidForLocation:(id)arg1 requirements:(id)arg2 ;
-(id)initWithSeconds:(double)arg1 trafficString:(id)arg2 transportType:(int)arg3 location:(id)arg4 ;
-(BOOL)isBetterThanETA:(id)arg1 requirements:(id)arg2 ;
-(id)objectForJSON;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)originator;
-(double)age;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

