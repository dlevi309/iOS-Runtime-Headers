/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface LPVideoProperties : NSObject <NSCopying> {

	BOOL _hasAudio;
	NSString* _accessibilityText;
	UIColor* __overlappingControlsColor;

}

@property (setter=_setOverlappingControlsColor:,nonatomic,retain) UIColor * _overlappingControlsColor;              //@synthesize _overlappingControlsColor=__overlappingControlsColor - In the implementation block
@property (assign,nonatomic) BOOL hasAudio;                                                                         //@synthesize hasAudio=_hasAudio - In the implementation block
@property (nonatomic,copy) NSString * accessibilityText;                                                            //@synthesize accessibilityText=_accessibilityText - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)accessibilityText;
-(void)setHasAudio:(BOOL)arg1 ;
-(BOOL)hasAudio;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(UIColor *)_overlappingControlsColor;
-(void)_setOverlappingControlsColor:(id)arg1 ;
@end

