/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString;

@interface SFDomainLabel : UIView {

	UILabel* _label;
	BOOL _attributedStringNeedsUpdate;
	BOOL _secure;
	NSString* _text;

}

@property (nonatomic,readonly) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (getter=isSecure,nonatomic,readonly) BOOL secure;              //@synthesize secure=_secure - In the implementation block
-(BOOL)isSecure;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(id)arg1 isSecure:(BOOL)arg2 ;
-(id)_makeAttributedString;
-(id)initWithText:(id)arg1 isSecure:(BOOL)arg2 ;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
@end

