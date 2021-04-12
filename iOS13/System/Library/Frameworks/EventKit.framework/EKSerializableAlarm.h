/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isAbsolute;
-(NSDate *)absoluteDate;
-(double)relativeOffset;
-(id)initWithAlarm:(id)arg1 ;
-(void)setAbsoluteDate:(NSDate *)arg1 ;
-(void)setRelativeOffset:(double)arg1 ;
-(id)createAlarm:(id*)arg1 ;
-(void)setIsAbsolute:(BOOL)arg1 ;
@end

