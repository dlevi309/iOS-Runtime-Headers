/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatItem.h>

@class NSDate, IMHandle;

@interface CKBalloonChatItem : CKChatItem

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
-(id)description;
-(NSDate *)time;
-(id)contact;
-(IMHandle *)sender;
-(BOOL)failed;
-(UIEdgeInsets)contentInsets;
-(BOOL)isEditable;
-(BOOL)isFromMe;
-(id)cellIdentifier;
-(Class)cellClass;
-(char)balloonOrientation;
-(Class)balloonViewClass;
-(void)configureBalloonView:(id)arg1 ;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(unsigned long long)balloonCorners;
-(char)balloonShape;
-(char)transcriptOrientation;
-(BOOL)displayDuringSend;
-(UIEdgeInsets)transcriptTextAlignmentInsets;
-(BOOL)wantsDrawerLayout;
-(id)loadTranscriptDrawerText;
-(BOOL)shouldCacheSize;
-(Class)impactBalloonViewClass;
-(BOOL)isBlackholed;
-(char)tailShape;
-(BOOL)needsPreservedAspectRatio;
-(BOOL)needsAdjustedTextAlignmentInsets;
@end

