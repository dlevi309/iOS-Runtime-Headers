/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <CoreBrightness/CBHIDService.h>

@class NSString;

@interface CBALSService : CBHIDService {

	BOOL _validData;
	double _lux;
	BOOL _colorSupport;
	double _x;
	double _y;
	double _CCT;
	NSString* _desc;
	unsigned long long _location;

}

@property (readonly) BOOL validData;                           //@synthesize validData=_validData - In the implementation block
@property (readonly) double lux;                               //@synthesize lux=_lux - In the implementation block
@property (readonly) BOOL colorSupport;                        //@synthesize colorSupport=_colorSupport - In the implementation block
@property (x,readonly) double x;                               //@synthesize x=_x - In the implementation block
@property (y,readonly) double y;                               //@synthesize y=_y - In the implementation block
@property (readonly) double CCT;                               //@synthesize CCT=_CCT - In the implementation block
@property (readonly) unsigned long long location;              //@synthesize location=_location - In the implementation block
-(double)lux;
-(double)x;
-(double)CCT;
-(double)y;
-(unsigned long long)location;
-(id)description;
-(void)setEvent:(IOHIDEventRef)arg1 ;
-(void)dealloc;
-(id)initWithHIDALSServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)validData;
-(id)copyDataInDictionary;
-(BOOL)updateEventData;
-(void)resetEventData;
-(BOOL)colorSupport;
@end

