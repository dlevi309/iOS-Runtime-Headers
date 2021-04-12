/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class EKEventStore;

@interface EKEventStoreWeakWrapper : NSObject {

	void* _unsafeRawPointer;
	EKEventStore* _weakEventStore;

}

@property (nonatomic,readonly) EKEventStore * weakEventStore; 
@property (nonatomic,readonly) void* unsafeRawPointer; 
-(id)initWithEventStore:(id)arg1 ;
-(EKEventStore *)weakEventStore;
-(void*)unsafeRawPointer;
@end

