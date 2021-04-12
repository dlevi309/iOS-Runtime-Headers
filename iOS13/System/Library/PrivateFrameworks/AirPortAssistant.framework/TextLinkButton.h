/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <UIKitCore/UIButton.h>

@protocol TextLinkButtonDelegate;
@class NSString;

@interface TextLinkButton : UIButton {

	NSString* _urlString;
	id<TextLinkButtonDelegate> _delegate;

}

@property (assign,nonatomic) id<TextLinkButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * urlString;                             //@synthesize urlString=_urlString - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<TextLinkButtonDelegate>)delegate;
-(void)setDelegate:(id<TextLinkButtonDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(void)tapAction:(id)arg1 ;
@end

