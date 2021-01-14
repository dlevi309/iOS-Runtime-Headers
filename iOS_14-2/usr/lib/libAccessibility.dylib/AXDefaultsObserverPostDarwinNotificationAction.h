/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNote:(NSString *)arg1 ;
-(id)initWithDarwinNotification:(id)arg1 ;
-(NSString *)note;
-(void)performForChangedDefault:(id)arg1 ;
@end

