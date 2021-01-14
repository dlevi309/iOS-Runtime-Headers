/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_initConstraints;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_initLabel;
-(UILayoutGuide *)leadingGuide;
-(void)setLeadingGuide:(UILayoutGuide *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

