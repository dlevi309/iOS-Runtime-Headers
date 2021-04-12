/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusRegionMapEntry.h>

@protocol _UILegacyFocusRegion;
@interface _UIFocusableRegionMapEntry : _UIFocusRegionMapEntry {

	BOOL _isFocusGuide;
	BOOL _focusCandidate;
	id<_UILegacyFocusRegion> _focusableRegion;

}

@property (assign,nonatomic,__weak) id<_UILegacyFocusRegion> focusableRegion;              //@synthesize focusableRegion=_focusableRegion - In the implementation block
@property (assign,nonatomic) BOOL isFocusGuide;                                            //@synthesize isFocusGuide=_isFocusGuide - In the implementation block
@property (assign,getter=isFocusCandidate,nonatomic) BOOL focusCandidate;                  //@synthesize focusCandidate=_focusCandidate - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<_UILegacyFocusRegion>)focusableRegion;
-(void)setFocusableRegion:(id<_UILegacyFocusRegion>)arg1 ;
-(void)setIsFocusGuide:(BOOL)arg1 ;
-(BOOL)isFocusGuide;
-(void)setFocusCandidate:(BOOL)arg1 ;
-(void)drawVisualRepresentationInContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 isFinal:(BOOL)arg3 ;
-(id)visualRepresentationColor;
-(BOOL)isFocusCandidate;
@end

