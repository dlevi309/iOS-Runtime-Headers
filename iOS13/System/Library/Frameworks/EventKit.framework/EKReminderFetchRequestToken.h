/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)cancel;
-(EKReminderStore *)reminderStore;
-(id)initWithReminderStore:(id)arg1 ;
@end

