/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAssociatedMessageChatItem.h>
#import <libobjc.A.dylib/CKMessageAcknowledgment.h>

@class IMHandle, NSString, UIColor;

@interface CKMessageAcknowledgmentChatItem : CKAssociatedMessageChatItem <CKMessageAcknowledgment> {

	long long _messageAcknowledgmentType;

}

@property (nonatomic,readonly) IMHandle * sender; 
@property (nonatomic,readonly) char balloonOrientation; 
@property (nonatomic,readonly) char balloonColorType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long messageAcknowledgmentType;                     //@synthesize messageAcknowledgmentType=_messageAcknowledgmentType - In the implementation block
@property (nonatomic,readonly) UIColor * acknowledgmentImageColor; 
@property (nonatomic,readonly) NSString * acknowledgmentImageName; 
@property (nonatomic,readonly) UIColor * selectedAcknowledgmentImageColor; 
@property (nonatomic,readonly) UIColor * selectedBalloonColor; 
-(IMHandle *)sender;
-(UIEdgeInsets)contentInsets;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(char)balloonOrientation;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(char)transcriptOrientation;
-(BOOL)wantsDrawerLayout;
-(UIColor *)selectedAcknowledgmentImageColor;
-(UIColor *)acknowledgmentImageColor;
-(long long)messageAcknowledgmentType;
-(long long)themeColor;
-(NSString *)acknowledgmentImageName;
-(UIColor *)selectedBalloonColor;
-(id)messageAcknowledgmentChatItem;
-(long long)themeStyle;
-(char)balloonColorType;
@end

