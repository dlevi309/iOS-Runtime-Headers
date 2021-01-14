/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonChatItem.h>

@class NSString;

@interface CKLocatingChatItem : CKBalloonChatItem

@property (nonatomic,copy,readonly) NSString * locationText; 
-(id)time;
-(id)sender;
-(id)message;
-(NSString *)locationText;
-(Class)balloonViewClass;
-(void)configureBalloonView:(id)arg1 ;
-(id)description;
-(BOOL)failed;
-(BOOL)isFromMe;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
@end

