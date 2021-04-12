/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardHome/SBLeafIcon.h>

@class SBApplication;

@interface SBApplicationIcon : SBLeafIcon {

	SBApplication* _application;

}
+(BOOL)canGenerateIconsInBackground;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)tags;
-(void)setBadge:(id)arg1 ;
-(id)initWithApplication:(id)arg1 ;
-(id)application;
-(id)automationID;
-(void)_noteActiveDataSourceDidChangeAndReloadIcon:(BOOL)arg1 ;
-(id)descriptionForLocation:(id)arg1 ;
-(id)folderTitleOptions;
-(id)folderFallbackTitle;
-(void)possibleUserTapBeganWithAbsoluteTime:(unsigned long long)arg1 andContinuousTime:(unsigned long long)arg2 ;
-(void)possibleUserTapDidCancel;
-(id)iconCategoryDescription;
-(id)iconFileSizeDescription;
-(BOOL)isApplicationIcon;
@end

