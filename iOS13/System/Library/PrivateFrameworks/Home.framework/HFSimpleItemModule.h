/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemModule.h>

@class NSSet;

@interface HFSimpleItemModule : HFItemModule {

	NSSet* _itemProviders;
	/*^block*/id _sectionBuilder;

}

@property (nonatomic,copy) id sectionBuilder;                    //@synthesize sectionBuilder=_sectionBuilder - In the implementation block
@property (nonatomic,retain) NSSet * itemProviders;              //@synthesize itemProviders=_itemProviders - In the implementation block
-(NSSet *)itemProviders;
-(void)setItemProviders:(NSSet *)arg1 ;
-(id)sectionBuilder;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithItemUpdater:(id)arg1 itemProviders:(id)arg2 sectionBuilder:(/*^block*/id)arg3 ;
-(void)setSectionBuilder:(id)arg1 ;
@end

