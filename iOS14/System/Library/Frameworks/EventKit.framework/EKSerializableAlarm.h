/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKSerializableObject.h>

@class NSDate;

@interface EKSerializableAlarm : EKSerializableObject {

	BOOL _isAbsolute;
	double _relativeOffset;
	NSDate* _absoluteDate;

}

@property (assign,nonatomic) double relativeOffset;              //@synthesize relativeOffset=_relativeOffset - In the implementation block
@property (nonatomic,copy) NSDate * absoluteDate;                //@synthesize absoluteDate=_absoluteDate - In the implementation block
@property (assign,nonatomic) BOOL isAbsolute;                    //@synthesize isAbsolute=_isAbsolute - In the implementation block
+(id)classesForKey;
-(id)createAlarm:(id*)arg1 ;
-(id)initWithAlarm:(id)arg1 ;
-(void)setIsAbsolute:(BOOL)arg1 ;
-(BOOL)isAbsolute;
-(NSDate *)absoluteDate;
-(void)setAbsoluteDate:(NSDate *)arg1 ;
-(double)relativeOffset;
-(void)setRelativeOffset:(double)arg1 ;
@end

