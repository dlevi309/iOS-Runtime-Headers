/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKArrayDifferenceConfiguration.h>

@class NSString;

@interface _CRKConcreteArrayDifferenceConfiguration : NSObject <CRKArrayDifferenceConfiguration> {

	/*^block*/id _publishedItemsComparator;
	/*^block*/id _incomingItemsIdentifierFunction;
	/*^block*/id _publishedItemsIdentifierFunction;
	/*^block*/id _liftingFunction;
	/*^block*/id _updateBlock;

}

@property (nonatomic,copy) id incomingItemsIdentifierFunction;               //@synthesize incomingItemsIdentifierFunction=_incomingItemsIdentifierFunction - In the implementation block
@property (nonatomic,copy) id publishedItemsIdentifierFunction;              //@synthesize publishedItemsIdentifierFunction=_publishedItemsIdentifierFunction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id publishedItemsComparator;                      //@synthesize publishedItemsComparator=_publishedItemsComparator - In the implementation block
@property (nonatomic,copy) id liftingFunction;                               //@synthesize liftingFunction=_liftingFunction - In the implementation block
@property (nonatomic,copy) id updateBlock;                                   //@synthesize updateBlock=_updateBlock - In the implementation block
-(id)updateBlock;
-(void)setUpdateBlock:(id)arg1 ;
-(void)setIncomingItemsIdentifierFunction:(id)arg1 ;
-(void)setPublishedItemsIdentifierFunction:(id)arg1 ;
-(id)incomingItemsIdentifierFunction;
-(id)publishedItemsIdentifierFunction;
-(id)publishedItemsComparator;
-(id)liftingFunction;
-(void)setPublishedItemsComparator:(id)arg1 ;
-(void)setLiftingFunction:(id)arg1 ;
@end

