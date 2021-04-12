/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_animationIdentifier;
-(id)_preferredMotionAnalyzerSettings;
-(void)_setPreferredMotionAnalyzerSettings:(id)arg1 ;
@end

