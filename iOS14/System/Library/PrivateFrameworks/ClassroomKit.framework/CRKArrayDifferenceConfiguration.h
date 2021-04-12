/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKArrayDifferenceConfiguration <NSObject>
@property (nonatomic,copy) id publishedItemsComparator; 
@property (nonatomic,copy,readonly) id incomingItemsIdentifierFunction; 
@property (nonatomic,copy,readonly) id publishedItemsIdentifierFunction; 
@property (nonatomic,copy) id liftingFunction; 
@property (nonatomic,copy) id updateBlock; 
@required
-(void)setUpdateBlock:(/*^block*/id)arg1;
-(id)updateBlock;
-(id)incomingItemsIdentifierFunction;
-(id)publishedItemsIdentifierFunction;
-(id)publishedItemsComparator;
-(id)liftingFunction;
-(void)setPublishedItemsComparator:(/*^block*/id)arg1;
-(void)setLiftingFunction:(/*^block*/id)arg1;

@end

