/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <libobjc.A.dylib/MTVisualStylingProviderObservingPrivate.h>

@class UIColor, NSHashTable, MTVisualStylingProvider, NSString;

@interface MRUVisualStylingProvider : NSObject <MTVisualStylingProviderObservingPrivate> {

	BOOL _supportsVibrancy;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	UIColor* _tertiaryColor;
	UIColor* _quaternaryColor;
	UIColor* _separatorColor;
	NSHashTable* _observers;
	MTVisualStylingProvider* _visualStylingProvider;

}

@property (nonatomic,retain) NSHashTable * observers;                                      //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;              //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
@property (nonatomic,retain) UIColor * primaryColor;                                       //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;                                     //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (nonatomic,retain) UIColor * tertiaryColor;                                      //@synthesize tertiaryColor=_tertiaryColor - In the implementation block
@property (nonatomic,retain) UIColor * quaternaryColor;                                    //@synthesize quaternaryColor=_quaternaryColor - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                                     //@synthesize separatorColor=_separatorColor - In the implementation block
@property (assign,nonatomic) BOOL supportsVibrancy;                                        //@synthesize supportsVibrancy=_supportsVibrancy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)addObserver:(id)arg1 ;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(void)providedStylesDidChangeForProvider:(id)arg1 ;
-(UIColor *)secondaryColor;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(UIColor *)quaternaryColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setTertiaryColor:(UIColor *)arg1 ;
-(UIColor *)separatorColor;
-(void)notifyObservers;
-(UIColor *)primaryColor;
-(UIColor *)tertiaryColor;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(id)initWithVisualStylingProvider:(id)arg1 ;
-(BOOL)supportsVibrancy;
-(void)setSupportsVibrancy:(BOOL)arg1 ;
-(long long)visualStyleForNowPlayingStyle:(long long)arg1 ;
-(id)colorForNowPlayingStyle:(long long)arg1 ;
-(double)alphaForNowPlayingStyle:(long long)arg1 ;
-(long long)blendModeForNowPlayingStyle:(long long)arg1 ;
-(void)setQuaternaryColor:(UIColor *)arg1 ;
-(void)applyStyle:(long long)arg1 toView:(id)arg2 ;
-(void)applyStyle:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
@end

