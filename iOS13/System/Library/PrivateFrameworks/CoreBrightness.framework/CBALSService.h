/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(double)lux;
-(unsigned long long)location;
-(void)setEvent:(IOHIDEventRef)arg1 ;
-(double)x;
-(double)y;
-(double)CCT;
-(id)initWithHIDALSServiceClient:(IOHIDServiceClientRef)arg1 ;
-(BOOL)validData;
-(id)copyDataInDictionary;
-(BOOL)updateEventData;
-(void)resetEventData;
-(BOOL)colorSupport;
@end

