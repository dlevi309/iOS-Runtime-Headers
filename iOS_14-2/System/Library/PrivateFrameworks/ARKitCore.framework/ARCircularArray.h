/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
@class NSMutableOrderedSet, NSArray;

@interface ARCircularArray : NSObject {

	NSMutableOrderedSet* _objects;
	long long _capacity;
	os_unfair_lock_s _orderedSetLock;

}

@property (readonly) NSArray * contents; 
-(NSArray *)contents;
-(long long)count;
-(BOOL)contains:(id)arg1 ;
-(id)initWithCapacity:(long long)arg1 ;
-(id)add:(id)arg1 ;
-(id)peekLatest;
@end

