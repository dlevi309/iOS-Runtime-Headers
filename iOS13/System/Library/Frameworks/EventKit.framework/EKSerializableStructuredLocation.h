/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithStructuredLocation:(id)arg1 ;
-(id)createStructuredLocation;
-(void)setCalLocation:(CalLocation *)arg1 ;
@end

