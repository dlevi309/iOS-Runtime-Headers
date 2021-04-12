/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreServices/SSVURLDataConsumer.h>

@class NSSet;

@interface SKUILoadMoreDataConsumer : SSVURLDataConsumer {

	NSSet* _unavailableItemIdentifiers;

}

@property (nonatomic,copy) NSSet * unavailableItemIdentifiers;              //@synthesize unavailableItemIdentifiers=_unavailableItemIdentifiers - In the implementation block
-(id)objectForData:(id)arg1 response:(id)arg2 error:(id*)arg3 ;
-(void)setUnavailableItemIdentifiers:(NSSet *)arg1 ;
-(NSSet *)unavailableItemIdentifiers;
-(id)_itemsWithDictionary:(id)arg1 ;
@end

