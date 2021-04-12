/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatItem.h>

@class CKEntity, NSDate, IMHandle;

@interface CKBalloonChatItem : CKChatItem {

	CKEntity* _entity;
	BOOL _isMultilineText;

}

@property (nonatomic,readonly) char balloonOrientation; 
@property (nonatomic,readonly) unsigned long long balloonCorners; 
@property (nonatomic,readonly) char tailShape; 
@property (nonatomic,readonly) char balloonShape; 
@property (nonatomic,readonly) Class balloonViewClass; 
@property (nonatomic,readonly) Class impactBalloonViewClass; 
@property (getter=isFromMe,nonatomic,readonly) BOOL fromMe; 
@property (nonatomic,readonly) BOOL failed; 
@property (nonatomic,readonly) NSDate * time; 
@property (nonatomic,readonly) IMHandle * sender; 
@property (nonatomic,readonly) BOOL shouldCacheSize; 
@property (nonatomic,readonly) BOOL isBlackholed; 
@property (nonatomic,readonly) BOOL isMultilineText;                           //@synthesize isMultilineText=_isMultilineText - In the implementation block
-(BOOL)isEditable;
-(unsigned long long)layoutType;
-(NSDate *)time;
-(IMHandle *)sender;
-(id)contact;
-(char)balloonShape;
-(char)transcriptOrientation;
-(BOOL)displayDuringSend;
-(id)loadTranscriptDrawerText;
-(BOOL)isMultilineText;
-(BOOL)needsPreservedAspectRatio;
-(BOOL)needsAdjustedTextAlignmentInsets;
-(UIEdgeInsets)contentInsets;
-(id)cellIdentifier;
-(Class)cellClass;
-(BOOL)isBlackholed;
-(char)balloonOrientation;
-(Class)balloonViewClass;
-(void)configureBalloonView:(id)arg1 ;
-(BOOL)shouldCacheSize;
-(Class)impactBalloonViewClass;
-(id)description;
-(UIEdgeInsets)transcriptTextAlignmentInsets;
-(BOOL)wantsDrawerLayout;
-(BOOL)failed;
-(Class)collectionViewCellClass;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(BOOL)isFromMe;
-(char)tailShape;
-(BOOL)_shouldShowContactPhotosInTranscript;
-(BOOL)wantsAvatarViewForLayoutEnvironment:(id)arg1 ;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(unsigned long long)balloonCorners;
-(id)layoutItemSpacingForEnvironment:(id)arg1 supplementaryItems:(id)arg2 ;
@end

