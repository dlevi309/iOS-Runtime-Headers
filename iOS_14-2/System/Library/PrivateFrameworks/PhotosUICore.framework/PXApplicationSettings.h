/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@class NSString;

@interface PXApplicationSettings : PXSettings {

	BOOL _wantsPseudostringsWithSpecialCharacters;
	double _defaultNavigationTimeoutDuration;
	NSString* _stringWithSpecialCharacters;

}

@property (assign,nonatomic) double defaultNavigationTimeoutDuration;                   //@synthesize defaultNavigationTimeoutDuration=_defaultNavigationTimeoutDuration - In the implementation block
@property (assign,nonatomic) BOOL wantsPseudostringsWithSpecialCharacters;              //@synthesize wantsPseudostringsWithSpecialCharacters=_wantsPseudostringsWithSpecialCharacters - In the implementation block
@property (nonatomic,copy) NSString * stringWithSpecialCharacters;                      //@synthesize stringWithSpecialCharacters=_stringWithSpecialCharacters - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setDefaultNavigationTimeoutDuration:(double)arg1 ;
-(void)setStringWithSpecialCharacters:(NSString *)arg1 ;
-(void)setWantsPseudostringsWithSpecialCharacters:(BOOL)arg1 ;
-(NSString *)stringWithSpecialCharacters;
-(double)defaultNavigationTimeoutDuration;
-(BOOL)wantsPseudostringsWithSpecialCharacters;
@end

