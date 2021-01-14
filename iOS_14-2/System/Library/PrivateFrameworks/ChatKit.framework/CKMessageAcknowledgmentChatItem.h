/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAssociatedMessageChatItem.h>
#import <libobjc.A.dylib/CKMessageAcknowledgment.h>

@class IMHandle, UIColor, NSString;

@interface CKMessageAcknowledgmentChatItem : CKAssociatedMessageChatItem <CKMessageAcknowledgment> {

	long long _messageAcknowledgmentType;

}

@property (nonatomic,readonly) IMHandle * sender; 
@property (nonatomic,readonly) char balloonOrientation; 
@property (nonatomic,readonly) char balloonColorType; 
@property (nonatomic,readonly) long long messageAcknowledgmentType;                     //@synthesize messageAcknowledgmentType=_messageAcknowledgmentType - In the implementation block
@property (nonatomic,readonly) UIColor * acknowledgmentImageColor; 
@property (nonatomic,readonly) NSString * acknowledgmentImageName; 
@property (nonatomic,readonly) UIColor * selectedAcknowledgmentImageColor; 
@property (nonatomic,readonly) UIColor * selectedBalloonColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IMHandle *)sender;
-(char)transcriptOrientation;
-(long long)themeStyle;
-(UIEdgeInsets)contentInsets;
-(char)balloonColorType;
-(id)messageAcknowledgmentChatItem;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(char)balloonOrientation;
-(long long)themeColor;
-(NSString *)acknowledgmentImageName;
-(UIColor *)selectedBalloonColor;
-(BOOL)wantsDrawerLayout;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(UIColor *)selectedAcknowledgmentImageColor;
-(UIColor *)acknowledgmentImageColor;
-(long long)messageAcknowledgmentType;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
@end

