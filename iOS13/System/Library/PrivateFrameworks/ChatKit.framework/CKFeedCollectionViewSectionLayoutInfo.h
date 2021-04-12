/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


#import <ChatKit/ChatKit-Structs.h>
@class NSArray;

@interface CKFeedCollectionViewSectionLayoutInfo : NSObject {

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
-(id)init;
-(CGSize)size;
-(BOOL)isHidden;
-(CGPoint)origin;
-(void)setSize:(CGSize)arg1 ;
-(CGRect)frame;
-(id)groupID;
-(void)setGroupID:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(void)setOrigin:(CGPoint)arg1 ;
-(long long)sectionType;
-(void)setSectionType:(long long)arg1 ;
-(NSArray *)floatingLayoutAttributes;
-(NSArray *)fixedLayoutAttributes;
-(long long)firstJoinedSection;
-(long long)lastJoinedSection;
-(long long)numberOfTilesOmitted;
-(NSArray *)tileLayoutAttributes;
-(void)setFirstJoinedSection:(long long)arg1 ;
-(void)setLastJoinedSection:(long long)arg1 ;
-(void)setPreviousVisibleSection:(long long)arg1 ;
-(void)setNextVisibleSection:(long long)arg1 ;
-(long long)previousVisibleSection;
-(void)setFixedLayoutAttributes:(NSArray *)arg1 ;
-(void)setHeaderSize:(CGSize)arg1 ;
-(void)setFooterSize:(CGSize)arg1 ;
-(void)setTileLayoutAttributes:(NSArray *)arg1 ;
-(void)setFloatingLayoutAttributes:(NSArray *)arg1 ;
-(CGSize)headerSize;
-(CGSize)footerSize;
-(long long)nextVisibleSection;
-(void)setNumberOfTilesOmitted:(long long)arg1 ;
@end

