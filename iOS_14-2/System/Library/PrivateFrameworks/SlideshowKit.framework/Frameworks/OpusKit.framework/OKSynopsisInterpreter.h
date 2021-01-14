/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface OKSynopsisInterpreter : NSObject {

	NSMutableDictionary* _objectCreators;
	NSMutableDictionary* _objectComparators;
	NSMutableArray* _guidelineItems;
	NSArray* _synopsis;

}

@property (nonatomic,retain) NSArray * synopsis;              //@synthesize synopsis=_synopsis - In the implementation block
-(void)setSynopsis:(NSArray *)arg1 ;
-(NSArray *)synopsis;
-(void)dealloc;
-(id)objectViewsFromGuidelineSynopsisItems:(id)arg1 ;
-(id)objectViewFromGuidelineSynopsisItem:(id)arg1 ;
-(id)guidelineSynopsisItemFromObjectView:(id)arg1 ;
-(id)initWithSynopsis:(id)arg1 ;
-(BOOL)hasSynopsis;
-(id)allGuidelineSynopsisItems;
-(id)allObjectsFromGuidelineSynopsisItems;
-(void)registerCreatorForItemType:(unsigned long long)arg1 initBlock:(/*^block*/id)arg2 ;
-(void)registerComparatorForItemType:(unsigned long long)arg1 compareBlock:(/*^block*/id)arg2 ;
-(id)guidelineSynopsisItemsFromObjectViews:(id)arg1 ;
@end

