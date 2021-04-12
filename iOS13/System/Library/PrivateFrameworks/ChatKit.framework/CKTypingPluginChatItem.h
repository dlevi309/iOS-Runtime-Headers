/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTypingChatItem.h>

@class NSString, NSData;

@interface CKTypingPluginChatItem : CKTypingChatItem {

	NSString* _plugInBundleID;
	NSData* _typingIndicatorData;

}

@property (nonatomic,copy) NSString * plugInBundleID;                     //@synthesize plugInBundleID=_plugInBundleID - In the implementation block
@property (nonatomic,readonly) NSData * typingIndicatorData;              //@synthesize typingIndicatorData=_typingIndicatorData - In the implementation block
-(id)iconImage;
-(Class)cellClass;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(NSData *)typingIndicatorData;
-(NSString *)plugInBundleID;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(id)indicatorLayer;
-(void)setPlugInBundleID:(NSString *)arg1 ;
@end

