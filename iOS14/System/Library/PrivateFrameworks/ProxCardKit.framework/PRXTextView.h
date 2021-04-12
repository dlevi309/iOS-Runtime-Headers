/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <UIKitCore/UITextView.h>
#import <libobjc.A.dylib/PRXTextContainer.h>

@class NSString, NSAttributedString;

@interface PRXTextView : UITextView <PRXTextContainer> {

	long long _style;

}

@property (nonatomic,readonly) long long style;                              //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textViewWithStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(long long)style;
@end

