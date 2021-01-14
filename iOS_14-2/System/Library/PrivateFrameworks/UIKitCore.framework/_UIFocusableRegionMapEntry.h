/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<_UILegacyFocusRegion>)focusableRegion;
-(id)description;
-(void)setIsFocusGuide:(BOOL)arg1 ;
-(void)setFocusableRegion:(id<_UILegacyFocusRegion>)arg1 ;
-(void)setFocusCandidate:(BOOL)arg1 ;
-(void)drawVisualRepresentationInContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 isFinal:(BOOL)arg3 ;
-(id)visualRepresentationColor;
-(BOOL)isFocusCandidate;
-(BOOL)isFocusGuide;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

