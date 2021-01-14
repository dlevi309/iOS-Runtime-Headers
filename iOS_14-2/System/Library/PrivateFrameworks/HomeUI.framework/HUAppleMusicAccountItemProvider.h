/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(void)setItems:(NSMutableSet *)arg1 ;
-(NSMutableSet *)items;
-(id)reloadItems;
-(id)invalidationReasons;
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
@end

