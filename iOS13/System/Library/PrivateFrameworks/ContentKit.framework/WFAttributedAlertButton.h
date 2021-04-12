/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFSelectableAlertButton.h>

@class NSAttributedString, NSString;

@interface WFAttributedAlertButton : WFSelectableAlertButton {

	NSAttributedString* _attributedTitle;
	NSString* _label;

}

@property (nonatomic,copy,readonly) NSAttributedString * attributedTitle;              //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                                  //@synthesize label=_label - In the implementation block
+(id)buttonWithAttributedTitle:(id)arg1 label:(id)arg2 selected:(BOOL)arg3 style:(long long)arg4 handler:(/*^block*/id)arg5 ;
-(NSAttributedString *)attributedTitle;
-(NSString *)label;
@end

