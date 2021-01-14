/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class EKEventStore;

@interface EKEventStoreWeakWrapper : NSObject {

	void* _unsafeRawPointer;
	EKEventStore* _weakEventStore;

}

@property (nonatomic,readonly) EKEventStore * weakEventStore; 
@property (nonatomic,readonly) void* unsafeRawPointer; 
-(void*)unsafeRawPointer;
-(EKEventStore *)weakEventStore;
-(id)initWithEventStore:(id)arg1 ;
@end

