/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RTLocation, NSDate;

@interface RTHint : NSObject <NSSecureCoding, NSCopying> {

	RTLocation* _location;
	long long _source;
	NSDate* _date;

}

@property (nonatomic,readonly) RTLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long source;                   //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)hintSourceToString:(long long)arg1 ;
-(id)init;
-(RTLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLocation:(id)arg1 source:(long long)arg2 date:(id)arg3 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)source;
@end

