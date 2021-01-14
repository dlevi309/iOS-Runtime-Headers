/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class SKUIStoreIdentifier, NSSet;

@interface SKUIStoreItemRelationship : NSObject {

	SKUIStoreIdentifier* _singleParent;
	NSSet* _chidItems;

}

@property (nonatomic,copy,readonly) SKUIStoreIdentifier * singleParent;              //@synthesize singleParent=_singleParent - In the implementation block
@property (nonatomic,copy,readonly) NSSet * chidItems;                               //@synthesize chidItems=_chidItems - In the implementation block
-(id)initWithParent:(id)arg1 andChildren:(id)arg2 ;
-(SKUIStoreIdentifier *)singleParent;
-(NSSet *)chidItems;
@end

