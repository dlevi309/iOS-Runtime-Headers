/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKConversationListEmbeddedCollectionViewCell.h>
#import <libobjc.A.dylib/CKConversationListCellDelegate.h>

@protocol CKConversationListCollectionViewCellDelegate;
@class NSObject, NSString;

@interface CKConversationListNewMessageCollectionViewCell : CKConversationListEmbeddedCollectionViewCell <CKConversationListCellDelegate> {

	NSObject*<CKConversationListCollectionViewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<CKConversationListCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)embeddedTableViewCellClass;
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSObject*<CKConversationListCollectionViewCellDelegate>)delegate;
-(void)updateContentsForConversation:(id)arg1 ;
-(id)embeddedNewMessageTableViewCell;
-(void)setDelegate:(NSObject*<CKConversationListCollectionViewCellDelegate>)arg1 ;
-(void)didHoverOverCell:(id)arg1 ;
-(void)selectedDeleteButtonForConversation:(id)arg1 inCell:(id)arg2 ;
-(void)updateFontSize;
-(double)widthForDeterminingAvatarVisibility;
@end

