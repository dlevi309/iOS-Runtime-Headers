/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class _UIMotionAnalyzerSettings, NSString;

@interface UIMotionEffect : NSObject <NSCopying, NSCoding> {

	_UIMotionAnalyzerSettings* _preferredMotionAnalyzerSettings;
	NSString* _animationIdentifier;

}
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
-(id)_animationIdentifier;
-(id)_preferredMotionAnalyzerSettings;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(void)_setPreferredMotionAnalyzerSettings:(id)arg1 ;
@end

