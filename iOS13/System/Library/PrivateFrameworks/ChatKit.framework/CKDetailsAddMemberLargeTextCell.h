/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKDetailsAddMemberCell.h>

@class UILayoutGuide;

@interface CKDetailsAddMemberLargeTextCell : CKDetailsAddMemberCell {

	UILayoutGuide* _leadingGuide;

}

@property (nonatomic,retain) UILayoutGuide * leadingGuide;              //@synthesize leadingGuide=_leadingGuide - In the implementation block
+(double)preferredHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_initLabel;
-(void)_initConstraints;
-(UILayoutGuide *)leadingGuide;
-(void)setLeadingGuide:(UILayoutGuide *)arg1 ;
@end

