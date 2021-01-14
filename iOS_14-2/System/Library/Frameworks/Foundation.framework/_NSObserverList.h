/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSObserverList : NSObject {

	id _owner;
	id _observers;
	AI _observerCount;
	os_unfair_lock_s _observersLock;

}
-(id)init;
-(void)finishObserving;
-(void)_receiveBox:(id)arg1 ;
-(id)debugDescription;
-(void)removeObservation:(id)arg1 ;
-(id)description;
-(void)dealloc;
@end

