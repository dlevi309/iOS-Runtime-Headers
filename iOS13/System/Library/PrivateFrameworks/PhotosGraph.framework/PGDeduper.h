/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSSet;

@interface PGDeduper : NSObject {

	NSSet* _identifiersOfRequiredItems;

}

@property (nonatomic,copy) NSSet * identifiersOfRequiredItems;              //@synthesize identifiersOfRequiredItems=_identifiersOfRequiredItems - In the implementation block
-(BOOL)itemIsRequired:(id)arg1 ;
-(id)requiredItemsInItems:(id)arg1 ;
-(NSSet *)identifiersOfRequiredItems;
-(void)setIdentifiersOfRequiredItems:(NSSet *)arg1 ;
-(id)deduplicatedItemsWithItems:(id)arg1 debugInfo:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
@end

