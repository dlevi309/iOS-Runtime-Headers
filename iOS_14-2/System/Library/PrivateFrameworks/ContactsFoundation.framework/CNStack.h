/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class NSMutableArray;

@interface CNStack : NSObject {

	NSMutableArray* _objects;

}

@property (nonatomic,readonly) id peek; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)pop;
-(void)push:(id)arg1 ;
-(void)popAllWithHandler:(/*^block*/id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)peek;
-(id)popAll;
-(void)removeObject:(id)arg1 ;
-(void)popWithHandler:(/*^block*/id)arg1 ;
@end

