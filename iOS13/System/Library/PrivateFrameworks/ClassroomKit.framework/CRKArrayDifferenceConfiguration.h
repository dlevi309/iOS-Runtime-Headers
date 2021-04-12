/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKArrayDifferenceConfiguration <NSObject>
@property (nonatomic,copy) id publishedItemsComparator; 
@property (nonatomic,copy,readonly) id incomingItemsIdentifierFunction; 
@property (nonatomic,copy,readonly) id publishedItemsIdentifierFunction; 
@property (nonatomic,copy) id liftingFunction; 
@property (nonatomic,copy) id updateBlock; 
@required
-(id)updateBlock;
-(void)setUpdateBlock:(/*^block*/id)arg1;
-(id)incomingItemsIdentifierFunction;
-(id)publishedItemsIdentifierFunction;
-(id)publishedItemsComparator;
-(id)liftingFunction;
-(void)setPublishedItemsComparator:(/*^block*/id)arg1;
-(void)setLiftingFunction:(/*^block*/id)arg1;

@end

