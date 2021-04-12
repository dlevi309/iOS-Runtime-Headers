/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAssociatedMessageChatItem.h>

@class NSArray, NSString, UIColor;

@interface CKAggregateAcknowledgmentChatItem : CKAssociatedMessageChatItem {

	long long _latestAcknowledgmentType;

}

@property (nonatomic,copy,readonly) NSArray * acknowledgments; 
@property (nonatomic,readonly) long long latestAcknowledgmentType;              //@synthesize latestAcknowledgmentType=_latestAcknowledgmentType - In the implementation block
@property (nonatomic,readonly) BOOL includesFromMe; 
@property (nonatomic,readonly) BOOL latestIsFromMe; 
@property (nonatomic,readonly) BOOL includesMultiple; 
@property (nonatomic,readonly) char balloonOrientation; 
@property (copy,readonly) NSString * acknowledgmentImageName; 
@property (readonly) UIColor * acknowledgmentImageColor; 
@property (readonly) Class balloonViewClass; 
-(char)transcriptOrientation;
-(UIEdgeInsets)contentInsets;
-(Class)cellClass;
-(BOOL)latestIsFromMe;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(char)balloonOrientation;
-(Class)balloonViewClass;
-(NSString *)acknowledgmentImageName;
-(UIColor *)acknowledgmentImageColor;
-(id)associatedChatItemGUID;
-(NSArray *)acknowledgments;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(long long)latestAcknowledgmentType;
-(id)_imAggregateAcknowledgmentChatItem;
-(BOOL)includesFromMe;
-(BOOL)includesMultiple;
-(BOOL)isEqual:(id)arg1 ;
@end

