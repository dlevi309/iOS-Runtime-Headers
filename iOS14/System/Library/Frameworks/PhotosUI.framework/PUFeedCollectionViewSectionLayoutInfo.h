/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class NSArray;

@interface PUFeedCollectionViewSectionLayoutInfo : NSObject {

	BOOL _hidden;
	NSArray* _fixedLayoutAttributes;
	NSArray* _tileLayoutAttributes;
	NSArray* _floatingLayoutAttributes;
	long long _sectionType;
	long long _previousVisibleSection;
	long long _nextVisibleSection;
	long long _firstJoinedSection;
	long long _lastJoinedSection;
	id _groupID;
	long long _numberOfTilesOmitted;
	CGPoint _origin;
	CGSize _size;
	CGSize _headerSize;
	CGSize _footerSize;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic) CGPoint origin;                                  //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGSize headerSize;                               //@synthesize headerSize=_headerSize - In the implementation block
@property (assign,nonatomic) CGSize footerSize;                               //@synthesize footerSize=_footerSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margins;                            //@synthesize margins=_margins - In the implementation block
@property (nonatomic,retain) NSArray * fixedLayoutAttributes;                 //@synthesize fixedLayoutAttributes=_fixedLayoutAttributes - In the implementation block
@property (nonatomic,retain) NSArray * tileLayoutAttributes;                  //@synthesize tileLayoutAttributes=_tileLayoutAttributes - In the implementation block
@property (nonatomic,retain) NSArray * floatingLayoutAttributes;              //@synthesize floatingLayoutAttributes=_floatingLayoutAttributes - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                     //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) long long sectionType;                           //@synthesize sectionType=_sectionType - In the implementation block
@property (assign,nonatomic) long long previousVisibleSection;                //@synthesize previousVisibleSection=_previousVisibleSection - In the implementation block
@property (assign,nonatomic) long long nextVisibleSection;                    //@synthesize nextVisibleSection=_nextVisibleSection - In the implementation block
@property (assign,nonatomic) long long firstJoinedSection;                    //@synthesize firstJoinedSection=_firstJoinedSection - In the implementation block
@property (assign,nonatomic) long long lastJoinedSection;                     //@synthesize lastJoinedSection=_lastJoinedSection - In the implementation block
@property (nonatomic,retain) id groupID;                                      //@synthesize groupID=_groupID - In the implementation block
@property (assign,nonatomic) long long numberOfTilesOmitted;                  //@synthesize numberOfTilesOmitted=_numberOfTilesOmitted - In the implementation block
@property (nonatomic,readonly) CGRect frame; 
-(void)setOrigin:(CGPoint)arg1 ;
-(CGPoint)origin;
-(BOOL)isHidden;
-(id)init;
-(void)setHidden:(BOOL)arg1 ;
-(CGSize)size;
-(id)groupID;
-(CGRect)frame;
-(void)setGroupID:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(UIEdgeInsets)margins;
-(long long)sectionType;
-(CGSize)headerSize;
-(CGSize)footerSize;
-(void)setSectionType:(long long)arg1 ;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(NSArray *)floatingLayoutAttributes;
-(void)setHeaderSize:(CGSize)arg1 ;
-(NSArray *)fixedLayoutAttributes;
-(long long)firstJoinedSection;
-(long long)lastJoinedSection;
-(long long)numberOfTilesOmitted;
-(NSArray *)tileLayoutAttributes;
-(void)setFirstJoinedSection:(long long)arg1 ;
-(void)setLastJoinedSection:(long long)arg1 ;
-(void)setFooterSize:(CGSize)arg1 ;
-(void)setPreviousVisibleSection:(long long)arg1 ;
-(void)setNextVisibleSection:(long long)arg1 ;
-(long long)previousVisibleSection;
-(void)setFixedLayoutAttributes:(NSArray *)arg1 ;
-(void)setTileLayoutAttributes:(NSArray *)arg1 ;
-(void)setFloatingLayoutAttributes:(NSArray *)arg1 ;
-(long long)nextVisibleSection;
-(void)setNumberOfTilesOmitted:(long long)arg1 ;
@end

