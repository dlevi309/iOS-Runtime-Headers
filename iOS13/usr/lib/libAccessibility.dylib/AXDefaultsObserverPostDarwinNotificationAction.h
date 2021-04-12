/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAccessibility.dylib
*/

#import <libobjc.A.dylib/AXDefaultsObserverAction.h>

@class NSString;

@interface AXDefaultsObserverPostDarwinNotificationAction : NSObject <AXDefaultsObserverAction> {

	NSString* _note;

}

@property (nonatomic,copy) NSString * note;                         //@synthesize note=_note - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)note;
-(void)setNote:(NSString *)arg1 ;
-(void)performForChangedDefault:(id)arg1 ;
-(id)initWithDarwinNotification:(id)arg1 ;
@end

