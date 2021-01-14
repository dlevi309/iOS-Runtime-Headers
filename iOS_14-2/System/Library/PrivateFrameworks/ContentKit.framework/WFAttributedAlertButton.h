/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

