/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/


@class NSString, NSArray, NSURL, UIColor;

@interface IMFullScreenEffect : NSObject {

	BOOL _triggeredByResponseKit;
	id _triggeredByObject;
	NSString* _identifier;
	NSArray* _messageFilters;
	NSURL* _soundEffectFileURL;
	unsigned long long _messageOrientation;
	id _delegate;

}

@property (assign,nonatomic) BOOL triggeredByResponseKit;                                    //@synthesize triggeredByResponseKit=_triggeredByResponseKit - In the implementation block
@property (assign,nonatomic,__weak) id triggeredByObject;                                    //@synthesize triggeredByObject=_triggeredByObject - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) Class effectViewClass; 
@property (nonatomic,readonly) unsigned long long layerCount; 
@property (nonatomic,readonly) BOOL effectIsDark; 
@property (getter=isForegroundEffect,nonatomic,readonly) BOOL foregroundEffect; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) NSArray * messageFilters;                                     //@synthesize messageFilters=_messageFilters - In the implementation block
@property (nonatomic,readonly) NSURL * soundEffectFileURL;                                   //@synthesize soundEffectFileURL=_soundEffectFileURL - In the implementation block
@property (nonatomic,readonly) BOOL shouldDrawOverNavigationBar; 
@property (nonatomic,readonly) BOOL soundEffectHasHapticTrack; 
@property (assign,nonatomic) unsigned long long messageOrientation;                          //@synthesize messageOrientation=_messageOrientation - In the implementation block
@property (assign) id delegate;                                                              //@synthesize delegate=_delegate - In the implementation block
+(id)_monochromeDimmingFilterWithType:(long long)arg1 ;
+(id)bigEmojiFilter;
+(id)tapBackFilter;
+(id)stickerFilter;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)duration;
-(unsigned long long)layerCount;
-(UIColor *)backgroundColor;
-(BOOL)effectIsDark;
-(void)setMessageOrientation:(unsigned long long)arg1 ;
-(void)setTriggeredByResponseKit:(BOOL)arg1 ;
-(void)prepareSoundEffect;
-(Class)effectViewClass;
-(BOOL)isForegroundEffect;
-(BOOL)shouldDrawOverNavigationBar;
-(NSArray *)messageFilters;
-(NSURL *)soundEffectFileURL;
-(BOOL)soundEffectHasHapticTrack;
-(unsigned long long)messageOrientation;
-(BOOL)triggeredByResponseKit;
-(id)triggeredByObject;
-(void)setTriggeredByObject:(id)arg1 ;
@end

