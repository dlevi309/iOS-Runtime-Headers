/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)shouldHighlight;
+(id)reuseIdentifier;
-(CKDetailsAddGroupNameView *)groupNameView;
-(void)setGroupNameView:(CKDetailsAddGroupNameView *)arg1 ;
-(id)_ckSymbolImageNamed:(id)arg1 preferredContentSizeCategory:(id)arg2 preferredFontTextStyle:(id)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
@end

