/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)urlString;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<TextLinkButtonDelegate>)delegate;
-(void)setDelegate:(id<TextLinkButtonDelegate>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUrlString:(NSString *)arg1 ;
-(void)dealloc;
-(void)tapAction:(id)arg1 ;
@end

