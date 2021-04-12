/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonChatItem.h>

@class NSString;

@interface CKLocatingChatItem : CKBalloonChatItem

@property (nonatomic,copy,readonly) NSString * locationText; 
-(id)description;
-(id)time;
-(id)message;
-(id)sender;
-(BOOL)failed;
-(BOOL)isFromMe;
-(NSString *)locationText;
-(Class)balloonViewClass;
-(void)configureBalloonView:(id)arg1 ;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
@end

