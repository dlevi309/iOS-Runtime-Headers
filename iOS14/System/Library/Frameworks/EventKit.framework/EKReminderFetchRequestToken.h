/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/EKFetchRequestToken.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EKReminderStore;

@interface EKReminderFetchRequestToken : NSObject <EKFetchRequestToken, NSCopying> {

	EKReminderStore* _reminderStore;

}

@property (nonatomic,__weak,readonly) EKReminderStore * reminderStore;              //@synthesize reminderStore=_reminderStore - In the implementation block
-(EKReminderStore *)reminderStore;
-(id)initWithReminderStore:(id)arg1 ;
-(void)cancel;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

