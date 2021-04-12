/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/RPSystemBroadcastPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, RPBroadcastPickerStandaloneViewController, UIButton;

@interface RPSystemBroadcastPickerView : UIView <RPSystemBroadcastPickerViewControllerDelegate, NSCoding> {

	BOOL _showsMicrophoneButton;
	NSString* _preferredExtension;
	RPBroadcastPickerStandaloneViewController* _broadcastPickerViewController;
	UIButton* _broadcastPickerButton;

}

@property (nonatomic,retain) RPBroadcastPickerStandaloneViewController * broadcastPickerViewController;              //@synthesize broadcastPickerViewController=_broadcastPickerViewController - In the implementation block
@property (nonatomic,retain) UIButton * broadcastPickerButton;                                                       //@synthesize broadcastPickerButton=_broadcastPickerButton - In the implementation block
@property (nonatomic,retain) NSString * preferredExtension;                                                          //@synthesize preferredExtension=_preferredExtension - In the implementation block
@property (assign,nonatomic) BOOL showsMicrophoneButton;                                                             //@synthesize showsMicrophoneButton=_showsMicrophoneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(NSString *)preferredExtension;
-(void)setPreferredExtension:(NSString *)arg1 ;
-(void)viewControllerDidFinish;
-(void)setBroadcastPickerViewController:(RPBroadcastPickerStandaloneViewController *)arg1 ;
-(void)addBroadcastPickerButton;
-(UIButton *)broadcastPickerButton;
-(void)screenCaptureChanged;
-(RPBroadcastPickerStandaloneViewController *)broadcastPickerViewController;
-(BOOL)showsMicrophoneButton;
-(void)setShowsMicrophoneButton:(BOOL)arg1 ;
-(void)setBroadcastPickerButton:(UIButton *)arg1 ;
@end

