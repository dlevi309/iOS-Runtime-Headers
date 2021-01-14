/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class NSString, VSFontCenter;

@interface VSFooterMessageView : UIView <PSHeaderFooterView> {

	NSString* _primaryMessage;
	NSString* _secondaryMessage;
	NSString* _tertiaryMessage;
	VSFontCenter* _fontCenter;

}

@property (nonatomic,copy) NSString * primaryMessage;                //@synthesize primaryMessage=_primaryMessage - In the implementation block
@property (nonatomic,copy) NSString * secondaryMessage;              //@synthesize secondaryMessage=_secondaryMessage - In the implementation block
@property (nonatomic,copy) NSString * tertiaryMessage;               //@synthesize tertiaryMessage=_tertiaryMessage - In the implementation block
@property (nonatomic,retain) VSFontCenter * fontCenter;              //@synthesize fontCenter=_fontCenter - In the implementation block
-(id)initWithSpecifier:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)dealloc;
-(VSFontCenter *)fontCenter;
-(void)setFontCenter:(VSFontCenter *)arg1 ;
-(NSString *)primaryMessage;
-(void)setPrimaryMessage:(NSString *)arg1 ;
-(NSString *)secondaryMessage;
-(void)setSecondaryMessage:(NSString *)arg1 ;
-(NSString *)tertiaryMessage;
-(void)setTertiaryMessage:(NSString *)arg1 ;
@end

