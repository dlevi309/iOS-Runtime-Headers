/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDateInterval;

@interface RTStoredLocationEnumerationOptions : NSObject <NSSecureCoding, NSCopying> {

	NSDateInterval* _dateInterval;
	double _horizontalAccuracy;
	unsigned long long _batchSize;

}

@property (nonatomic,copy) NSDateInterval * dateInterval;               //@synthesize dateInterval=_dateInterval - In the implementation block
@property (assign,nonatomic) double horizontalAccuracy;                 //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;              //@synthesize batchSize=_batchSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(NSDateInterval *)dateInterval;
-(double)horizontalAccuracy;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(id)initWithDateInterval:(id)arg1 horizontalAccuracy:(double)arg2 batchSize:(unsigned long long)arg3 ;
-(BOOL)isEqualToOptions:(id)arg1 ;
@end

