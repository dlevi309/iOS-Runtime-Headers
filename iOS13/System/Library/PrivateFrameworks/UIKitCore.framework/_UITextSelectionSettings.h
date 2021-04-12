/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISettings.h>

@class NSNumber;

@interface _UITextSelectionSettings : _UISettings {

	double _minPinkWidth;
	double _maxPinkWidth;
	double _pinkWidthFactor;
	double _linear;
	double _parabolic;
	double _gain;
	double _allowableSeparation;
	double _allowableForceMovement;
	NSNumber* _shouldUseAcceleration;
	NSNumber* _shouldPreferEndOfWord;
	NSNumber* _allowExtendingSelections;
	NSNumber* _enableDeepPress;

}

@property (assign,nonatomic) double minPinkWidth;                              //@synthesize minPinkWidth=_minPinkWidth - In the implementation block
@property (assign,nonatomic) double maxPinkWidth;                              //@synthesize maxPinkWidth=_maxPinkWidth - In the implementation block
@property (assign,nonatomic) double pinkWidthFactor;                           //@synthesize pinkWidthFactor=_pinkWidthFactor - In the implementation block
@property (assign,nonatomic) double linear;                                    //@synthesize linear=_linear - In the implementation block
@property (assign,nonatomic) double parabolic;                                 //@synthesize parabolic=_parabolic - In the implementation block
@property (assign,nonatomic) double gain;                                      //@synthesize gain=_gain - In the implementation block
@property (assign,nonatomic) double allowableSeparation;                       //@synthesize allowableSeparation=_allowableSeparation - In the implementation block
@property (assign,nonatomic) double allowableForceMovement;                    //@synthesize allowableForceMovement=_allowableForceMovement - In the implementation block
@property (nonatomic,retain) NSNumber * shouldUseAcceleration;                 //@synthesize shouldUseAcceleration=_shouldUseAcceleration - In the implementation block
@property (nonatomic,retain) NSNumber * shouldPreferEndOfWord;                 //@synthesize shouldPreferEndOfWord=_shouldPreferEndOfWord - In the implementation block
@property (nonatomic,retain) NSNumber * allowExtendingSelections;              //@synthesize allowExtendingSelections=_allowExtendingSelections - In the implementation block
@property (nonatomic,retain) NSNumber * enableDeepPress;                       //@synthesize enableDeepPress=_enableDeepPress - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(void)setDefaultValues;
-(double)allowableSeparation;
-(void)setAllowableSeparation:(double)arg1 ;
-(double)allowableForceMovement;
-(NSNumber *)shouldUseAcceleration;
-(NSNumber *)allowExtendingSelections;
-(NSNumber *)enableDeepPress;
-(void)setMinPinkWidth:(double)arg1 ;
-(void)setMaxPinkWidth:(double)arg1 ;
-(void)setPinkWidthFactor:(double)arg1 ;
-(void)setLinear:(double)arg1 ;
-(void)setParabolic:(double)arg1 ;
-(void)setGain:(double)arg1 ;
-(void)setAllowableForceMovement:(double)arg1 ;
-(void)setAllowExtendingSelections:(NSNumber *)arg1 ;
-(void)setShouldUseAcceleration:(NSNumber *)arg1 ;
-(void)setShouldPreferEndOfWord:(NSNumber *)arg1 ;
-(void)setEnableDeepPress:(NSNumber *)arg1 ;
-(double)minPinkWidth;
-(double)maxPinkWidth;
-(double)pinkWidthFactor;
-(double)linear;
-(double)parabolic;
-(double)gain;
-(NSNumber *)shouldPreferEndOfWord;
@end

