/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardHome/SBLeafIcon.h>

@class SBApplication;

@interface SBApplicationIcon : SBLeafIcon {

	SBApplication* _application;

}
+(BOOL)canGenerateIconsInBackground;
-(id)folderTitleOptions;
-(void)possibleUserTapBeganWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2 ;
-(id)initWithApplication:(id)arg1 ;
-(id)tags;
-(id)iTunesCategoriesOrderedByRelevancy;
-(void)setBadge:(id)arg1 ;
-(id)folderFallbackTitle;
-(id)application;
-(id)automationID;
-(void)_noteActiveDataSourceDidChangeAndReloadIcon:(BOOL)arg1 ;
-(BOOL)isApplicationIcon;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)possibleUserTapDidCancel;
-(BOOL)isEqual:(id)arg1 ;
@end

