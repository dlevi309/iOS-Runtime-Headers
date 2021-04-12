/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class NSMutableArray;

@interface CNStack : NSObject {

	NSMutableArray* _objects;

}

@property (nonatomic,readonly) id peek; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)removeObject:(id)arg1 ;
-(id)peek;
-(void)push:(id)arg1 ;
-(id)pop;
-(void)popAllWithHandler:(/*^block*/id)arg1 ;
-(id)popAll;
-(void)popWithHandler:(/*^block*/id)arg1 ;
@end

