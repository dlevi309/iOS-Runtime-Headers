/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKDetailsCell.h>
#import <libobjc.A.dylib/CKDetailsCell.h>

@class CKDetailsAddGroupNameView, NSString;

@interface CKDetailsGroupNameCell : CKDetailsCell <CKDetailsCell> {

	CKDetailsAddGroupNameView* _groupNameView;

}

@property (nonatomic,retain) CKDetailsAddGroupNameView * groupNameView;              //@synthesize groupNameView=_groupNameView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
+(BOOL)shouldHighlight;
-(void)dealloc;
-(CKDetailsAddGroupNameView *)groupNameView;
-(void)setGroupNameView:(CKDetailsAddGroupNameView *)arg1 ;
@end

