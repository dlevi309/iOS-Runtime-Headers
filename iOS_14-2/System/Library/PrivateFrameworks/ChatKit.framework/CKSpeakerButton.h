/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIButton.h>

@interface CKSpeakerButton : UIButton {

	char _orientation;
	BOOL _speakerEnabled;
	BOOL _shouldShowText;

}

@property (assign,nonatomic) BOOL shouldShowText;                                      //@synthesize shouldShowText=_shouldShowText - In the implementation block
@property (assign,nonatomic) char orientation;                                         //@synthesize orientation=_orientation - In the implementation block
@property (assign,getter=isSpeakerEnabled,nonatomic) BOOL speakerEnabled;              //@synthesize speakerEnabled=_speakerEnabled - In the implementation block
+(id)speakerImageWithOrientation:(char)arg1 speakerEnabled:(BOOL)arg2 shouldShowText:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchUpInside:(id)arg1 ;
-(void)updateSpeakerImage;
-(void)hideSpeakerText;
-(BOOL)isSpeakerEnabled;
-(BOOL)shouldShowText;
-(void)setShouldShowText:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)orientation;
-(void)setSpeakerEnabled:(BOOL)arg1 ;
-(void)setOrientation:(char)arg1 ;
@end

