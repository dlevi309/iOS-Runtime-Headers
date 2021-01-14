/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy) id publishedItemsComparator;                      //@synthesize publishedItemsComparator=_publishedItemsComparator - In the implementation block
@property (nonatomic,copy) id liftingFunction;                               //@synthesize liftingFunction=_liftingFunction - In the implementation block
@property (nonatomic,copy) id updateBlock;                                   //@synthesize updateBlock=_updateBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
-(void)setIncomingItemsIdentifierFunction:(id)arg1 ;
-(void)setPublishedItemsIdentifierFunction:(id)arg1 ;
-(id)incomingItemsIdentifierFunction;
-(id)publishedItemsIdentifierFunction;
-(id)publishedItemsComparator;
-(id)liftingFunction;
-(void)setPublishedItemsComparator:(id)arg1 ;
-(void)setLiftingFunction:(id)arg1 ;
@end

