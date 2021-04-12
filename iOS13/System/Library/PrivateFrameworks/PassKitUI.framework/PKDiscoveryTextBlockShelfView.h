/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDiscoveryShelfView.h>

@class UILabel, PKDiscoveryTextBlockShelf, NSAttributedString;

@interface PKDiscoveryTextBlockShelfView : PKDiscoveryShelfView {

	UILabel* _bodyLabel;
	PKDiscoveryTextBlockShelf* _shelf;
	NSAttributedString* _attributedText;

}
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithShelf:(id)arg1 ;
-(id)_attributedStringForBody:(id)arg1 lede:(id)arg2 headerline:(id)arg3 ;
-(id)_uiFontTextStyle;
-(id)_textColorForBody;
-(id)_textColorForLede;
-(id)_textColorForHeaderline;
@end

