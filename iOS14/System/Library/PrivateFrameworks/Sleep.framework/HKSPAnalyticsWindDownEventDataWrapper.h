/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HKSPAnalyticsWindDownEventDataWrapper : NSObject <NSCoding, NSSecureCoding> {

	NSArray* _eventDatums;

}

@property (nonatomic,retain) NSArray * eventDatums;              //@synthesize eventDatums=_eventDatums - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)eventDatums;
-(id)initWithEventDatums:(id)arg1 ;
-(void)setEventDatums:(NSArray *)arg1 ;
@end

