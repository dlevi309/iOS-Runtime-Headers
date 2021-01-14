/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

