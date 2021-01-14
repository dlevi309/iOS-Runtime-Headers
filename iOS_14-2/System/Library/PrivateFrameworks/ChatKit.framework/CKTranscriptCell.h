/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableCollectionViewCell.h>

@interface CKTranscriptCell : CKEditableCollectionViewCell {

	BOOL _wantsDrawerLayout;
	char _orientation;
	BOOL _shouldConfigureForDarkFSM;
	BOOL _insertingBeforeReplyPreview;
	BOOL _insertingWithReplyPreview;
	BOOL _suppressAnimationsForLineUpdates;
	double _drawerPercentRevealed;
	double _associatedItemOffset;
	long long _insertionType;
	double _insertionDuration;
	double _insertionBeginTime;

}

@property (assign,nonatomic) BOOL wantsDrawerLayout;                                                                       //@synthesize wantsDrawerLayout=_wantsDrawerLayout - In the implementation block
@property (assign,nonatomic) char orientation;                                                                             //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double drawerPercentRevealed;                                                                 //@synthesize drawerPercentRevealed=_drawerPercentRevealed - In the implementation block
@property (assign,nonatomic) double associatedItemOffset;                                                                  //@synthesize associatedItemOffset=_associatedItemOffset - In the implementation block
@property (assign,nonatomic) BOOL shouldConfigureForDarkFSM;                                                               //@synthesize shouldConfigureForDarkFSM=_shouldConfigureForDarkFSM - In the implementation block
@property (assign,nonatomic) long long insertionType;                                                                      //@synthesize insertionType=_insertionType - In the implementation block
@property (assign,nonatomic) double insertionDuration;                                                                     //@synthesize insertionDuration=_insertionDuration - In the implementation block
@property (assign,nonatomic) double insertionBeginTime;                                                                    //@synthesize insertionBeginTime=_insertionBeginTime - In the implementation block
@property (assign,nonatomic) BOOL insertingBeforeReplyPreview;                                                             //@synthesize insertingBeforeReplyPreview=_insertingBeforeReplyPreview - In the implementation block
@property (assign,nonatomic) BOOL insertingWithReplyPreview;                                                               //@synthesize insertingWithReplyPreview=_insertingWithReplyPreview - In the implementation block
@property (assign,getter=suppressesAnimationsForLineUpdates,nonatomic) BOOL suppressAnimationsForLineUpdates;              //@synthesize suppressAnimationsForLineUpdates=_suppressAnimationsForLineUpdates - In the implementation block
-(void)clearFilters;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)suppressesAnimationsForLineUpdates;
-(double)drawerPercentRevealed;
-(void)layoutSubviewsForContents;
-(long long)insertionType;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(double)insertionBeginTime;
-(double)insertionDuration;
-(BOOL)insertingWithReplyPreview;
-(BOOL)shouldConfigureForDarkFSM;
-(void)performReload:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performRemoval:(/*^block*/id)arg1 ;
-(void)prepareForReuse;
-(void)addFilter:(id)arg1 ;
-(void)performHide:(/*^block*/id)arg1 ;
-(void)performReveal:(/*^block*/id)arg1 ;
-(void)layoutSubviews;
-(BOOL)wantsDrawerLayout;
-(char)orientation;
-(void)setDrawerPercentRevealed:(double)arg1 ;
-(void)setShouldConfigureForDarkFSM:(BOOL)arg1 ;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
-(void)setAssociatedItemOffset:(double)arg1 ;
-(void)setWantsDrawerLayout:(BOOL)arg1 ;
-(void)setInsertionType:(long long)arg1 ;
-(void)setInsertionBeginTime:(double)arg1 ;
-(void)setSuppressAnimationsForLineUpdates:(BOOL)arg1 ;
-(void)setInsertionDuration:(double)arg1 ;
-(void)setInsertingWithReplyPreview:(BOOL)arg1 ;
-(void)setInsertingBeforeReplyPreview:(BOOL)arg1 ;
-(void)layoutSubviewsForDrawer;
-(void)layoutSubviewsForAlignmentContents;
-(double)associatedItemOffset;
-(BOOL)insertingBeforeReplyPreview;
-(void)setOrientation:(char)arg1 ;
@end

