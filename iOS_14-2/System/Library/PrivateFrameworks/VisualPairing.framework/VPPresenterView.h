/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VisualPairing.framework/VisualPairing
*/

#import <UIKitCore/UIView.h>

@protocol OS_dispatch_source;
@class AVPlayer, CALayer, NSArray, NSObject, NSString;

@interface VPPresenterView : UIView {

	AVPlayer* _moviePlayer;
	BOOL _started;
	CALayer* _watermarkLayer;
	NSArray* _watermarkPixelBuffers;
	unsigned long long _watermarkStepIndex;
	NSObject*<OS_dispatch_source> _watermarkStepTimer;
	unsigned _flags;
	NSString* _verificationCode;

}

@property (assign,nonatomic) unsigned flags;                         //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSString * verificationCode;              //@synthesize verificationCode=_verificationCode - In the implementation block
-(void)start;
-(unsigned)flags;
-(void)stop;
-(void)layoutSubviews;
-(void)setFlags:(unsigned)arg1 ;
-(NSString *)verificationCode;
-(void)setVerificationCode:(NSString *)arg1 ;
-(void)_watermarkStep;
@end

