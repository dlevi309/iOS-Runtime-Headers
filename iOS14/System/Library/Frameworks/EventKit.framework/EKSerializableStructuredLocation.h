/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKSerializableObject.h>

@class CalLocation;

@interface EKSerializableStructuredLocation : EKSerializableObject {

	CalLocation* _calLocation;

}

@property (nonatomic,copy) CalLocation * calLocation;              //@synthesize calLocation=_calLocation - In the implementation block
+(id)classesForKey;
-(CalLocation *)calLocation;
-(void)setCalLocation:(CalLocation *)arg1 ;
-(id)initWithStructuredLocation:(id)arg1 ;
-(id)createStructuredLocation;
@end

