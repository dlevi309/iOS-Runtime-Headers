/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, UIButton;

@interface RPSystemBroadcastPickerView : UIView <NSCoding> {

	BOOL _showsMicrophoneButton;
	NSString* _preferredExtension;
	UIButton* _broadcastPickerButton;

}

@property (nonatomic,retain) UIButton * broadcastPickerButton;              //@synthesize broadcastPickerButton=_broadcastPickerButton - In the implementation block
@property (nonatomic,retain) NSString * preferredExtension;                 //@synthesize preferredExtension=_preferredExtension - In the implementation block
@property (assign,nonatomic) BOOL showsMicrophoneButton;                    //@synthesize showsMicrophoneButton=_showsMicrophoneButton - In the implementation block
-(NSString *)preferredExtension;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(void)setPreferredExtension:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addBroadcastPickerButton;
-(UIButton *)broadcastPickerButton;
-(void)screenCaptureChanged;
-(BOOL)showsMicrophoneButton;
-(void)setShowsMicrophoneButton:(BOOL)arg1 ;
-(void)setBroadcastPickerButton:(UIButton *)arg1 ;
@end

