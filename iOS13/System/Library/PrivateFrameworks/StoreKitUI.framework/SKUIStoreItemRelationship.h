/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

