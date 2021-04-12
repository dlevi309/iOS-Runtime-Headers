/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithShelf:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_attributedStringForBody:(id)arg1 lede:(id)arg2 headerline:(id)arg3 ;
-(id)_uiFontTextStyle;
-(id)_textColorForBody;
-(id)_textColorForLede;
-(id)_textColorForHeaderline;
@end

