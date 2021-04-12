/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBApplicationIcon.h>
#import <libobjc.A.dylib/SBCalendarIconImageProviderDelegate.h>

@class SBCalendarIconImageProvider;

@interface SBCalendarApplicationIcon : SBApplicationIcon <SBCalendarIconImageProviderDelegate> {

	SBCalendarIconImageProvider* _imageProvider;

}
+(Class)downloadingIconClass;
+(BOOL)canGenerateIconsInBackground;
-(void)localeChanged;
-(void)_boldTextStatusDidChange:(id)arg1 ;
-(id)initWithApplication:(id)arg1 ;
-(void)calendarIconImageProviderHasChanged:(id)arg1 ;
-(id)generateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(id)unmaskedIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(void)dealloc;
@end

