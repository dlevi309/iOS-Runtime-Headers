/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class NSPointerArray;

@interface EKChangeListener : NSObject {

	NSPointerArray* _delegates;

}

@property (retain) NSPointerArray * delegates;              //@synthesize delegates=_delegates - In the implementation block
+(id)changedIdentifiersForNotification:(id)arg1 ;
+(id)updatedObjectFor:(id)arg1 changeNotification:(id)arg2 ;
-(NSPointerArray *)delegates;
-(void)setDelegates:(NSPointerArray *)arg1 ;
-(id)init;
-(void)objectsChangedNotification:(id)arg1 ;
-(id)_orderedDelegates;
-(void)dealloc;
-(void)registerDelegate:(id)arg1 ;
@end

