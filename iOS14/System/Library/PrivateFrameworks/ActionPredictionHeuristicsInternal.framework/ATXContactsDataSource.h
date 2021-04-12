/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/


@class ATXHeuristicDevice;

@interface ATXContactsDataSource : NSObject {

	ATXHeuristicDevice* _device;

}
-(id)initWithDevice:(id)arg1 ;
-(void)contactsWithIdentifiers:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)contactsWithPhone:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)contactsWithName:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)contactsWithEmail:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_contactsWithPredicate:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

