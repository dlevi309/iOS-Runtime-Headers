/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemProvider.h>

@protocol HFMediaProfileContainer;
@class NSMutableSet;

@interface HUAppleMusicAccountItemProvider : HFItemProvider {

	NSMutableSet* _items;
	id<HFMediaProfileContainer> _mediaProfileContainer;
	/*^block*/id _filter;

}

@property (nonatomic,retain) NSMutableSet * items;                                             //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,copy) id filter;                                                          //@synthesize filter=_filter - In the implementation block
-(NSMutableSet *)items;
-(void)setItems:(NSMutableSet *)arg1 ;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)reloadItems;
-(id)invalidationReasons;
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
@end

