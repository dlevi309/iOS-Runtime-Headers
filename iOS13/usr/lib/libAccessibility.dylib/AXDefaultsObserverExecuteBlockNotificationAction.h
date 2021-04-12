/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAccessibility.dylib
*/

#import <libobjc.A.dylib/AXDefaultsObserverAction.h>

@class NSString;

@interface AXDefaultsObserverExecuteBlockNotificationAction : NSObject <AXDefaultsObserverAction> {

	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)performForChangedDefault:(id)arg1 ;
@end

