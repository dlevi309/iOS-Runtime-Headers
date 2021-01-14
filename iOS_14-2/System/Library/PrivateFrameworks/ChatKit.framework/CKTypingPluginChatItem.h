/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

