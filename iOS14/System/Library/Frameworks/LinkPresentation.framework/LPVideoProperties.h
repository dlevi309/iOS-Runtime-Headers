/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString;

@interface LPVideoProperties : NSObject <NSCopying> {

	BOOL _hasAudio;
	UIColor* _overlappingControlsColor;
	NSString* _accessibilityText;

}

@property (setter=_setOverlappingControlsColor:,nonatomic,retain) UIColor * _overlappingControlsColor;              //@synthesize overlappingControlsColor=_overlappingControlsColor - In the implementation block
@property (assign,nonatomic) BOOL hasAudio;                                                                         //@synthesize hasAudio=_hasAudio - In the implementation block
@property (nonatomic,copy) NSString * accessibilityText;                                                            //@synthesize accessibilityText=_accessibilityText - In the implementation block
-(void)setHasAudio:(BOOL)arg1 ;
-(NSString *)accessibilityText;
-(BOOL)hasAudio;
-(void)setAccessibilityText:(NSString *)arg1 ;
-(UIColor *)_overlappingControlsColor;
-(void)_setOverlappingControlsColor:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

