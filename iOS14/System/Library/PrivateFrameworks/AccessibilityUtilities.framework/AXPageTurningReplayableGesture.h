/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/AXReplayableGesture.h>

@interface AXPageTurningReplayableGesture : AXReplayableGesture {

	BOOL _isLeftToRightSwipe;
	BOOL _isLandscape;

}

@property (assign,nonatomic) BOOL isLeftToRightSwipe;              //@synthesize isLeftToRightSwipe=_isLeftToRightSwipe - In the implementation block
@property (assign,nonatomic) BOOL isLandscape;                     //@synthesize isLandscape=_isLandscape - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)numberOfEvents;
-(id)fingerIdentifiersAtEventIndex:(unsigned long long)arg1 ;
-(double)timeAtEventIndex:(unsigned long long)arg1 ;
-(CGPoint)pointForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2 ;
-(double)forceForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2 ;
-(BOOL)arePointsDeviceRelative;
-(void)updateForLandscape:(BOOL)arg1 ;
-(BOOL)isLeftToRightSwipe;
-(id)initForLeftToRightSwipe:(BOOL)arg1 ;
-(void)setIsLeftToRightSwipe:(BOOL)arg1 ;
-(BOOL)isLandscape;
-(void)setIsLandscape:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

