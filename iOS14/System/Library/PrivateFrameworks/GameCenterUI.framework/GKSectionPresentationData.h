/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@interface GKSectionPresentationData : NSObject {

	long long _section;
	double _headerMinY;
	double _headerMaxY;
	double _itemsMinY;
	double _itemsMaxY;
	double _footerMinY;
	double _footerMaxY;
	double _minY;
	double _maxY;
	double _showMoreMaxY;
	unsigned long long _numHeaders;
	unsigned long long _numFooters;
	unsigned long long _numOverlays;
	unsigned long long _numItems;
	unsigned long long _overlayOffset;

}

@property (assign,nonatomic) long long section;                             //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) double headerMinY;                             //@synthesize headerMinY=_headerMinY - In the implementation block
@property (assign,nonatomic) double headerMaxY;                             //@synthesize headerMaxY=_headerMaxY - In the implementation block
@property (assign,nonatomic) double itemsMinY;                              //@synthesize itemsMinY=_itemsMinY - In the implementation block
@property (assign,nonatomic) double itemsMaxY;                              //@synthesize itemsMaxY=_itemsMaxY - In the implementation block
@property (assign,nonatomic) double footerMinY;                             //@synthesize footerMinY=_footerMinY - In the implementation block
@property (assign,nonatomic) double footerMaxY;                             //@synthesize footerMaxY=_footerMaxY - In the implementation block
@property (assign,nonatomic) double minY;                                   //@synthesize minY=_minY - In the implementation block
@property (assign,nonatomic) double maxY;                                   //@synthesize maxY=_maxY - In the implementation block
@property (assign,nonatomic) double showMoreMaxY;                           //@synthesize showMoreMaxY=_showMoreMaxY - In the implementation block
@property (assign,nonatomic) unsigned long long numHeaders;                 //@synthesize numHeaders=_numHeaders - In the implementation block
@property (assign,nonatomic) unsigned long long numFooters;                 //@synthesize numFooters=_numFooters - In the implementation block
@property (assign,nonatomic) unsigned long long numOverlays;                //@synthesize numOverlays=_numOverlays - In the implementation block
@property (assign,nonatomic) unsigned long long numItems;                   //@synthesize numItems=_numItems - In the implementation block
@property (assign,nonatomic) unsigned long long overlayOffset;              //@synthesize overlayOffset=_overlayOffset - In the implementation block
-(double)minY;
-(double)maxY;
-(void)setSection:(long long)arg1 ;
-(id)initWithSection:(long long)arg1 presentationData:(id)arg2 ;
-(void)updateWithLayoutAttributes:(id)arg1 supplementaryLocation:(unsigned long long)arg2 ;
-(double)headerMinY;
-(void)setHeaderMinY:(double)arg1 ;
-(void)setHeaderMaxY:(double)arg1 ;
-(void)setItemsMinY:(double)arg1 ;
-(double)itemsMaxY;
-(void)setItemsMaxY:(double)arg1 ;
-(double)footerMinY;
-(void)setFooterMinY:(double)arg1 ;
-(double)footerMaxY;
-(void)setFooterMaxY:(double)arg1 ;
-(void)setShowMoreMaxY:(double)arg1 ;
-(unsigned long long)numHeaders;
-(void)setNumHeaders:(unsigned long long)arg1 ;
-(unsigned long long)numFooters;
-(void)setNumFooters:(unsigned long long)arg1 ;
-(unsigned long long)numOverlays;
-(void)setNumOverlays:(unsigned long long)arg1 ;
-(unsigned long long)overlayOffset;
-(void)setOverlayOffset:(unsigned long long)arg1 ;
-(long long)section;
-(void)setNumItems:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)numItems;
-(void)setMinY:(double)arg1 ;
-(void)setMaxY:(double)arg1 ;
-(double)itemsMinY;
-(double)headerMaxY;
-(double)showMoreMaxY;
@end

