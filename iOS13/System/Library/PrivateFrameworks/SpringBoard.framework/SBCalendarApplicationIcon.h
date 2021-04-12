/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBApplicationIcon.h>
#import <libobjc.A.dylib/SBCalendarIconImageProviderDelegate.h>

@class SBCalendarIconImageProvider;

@interface SBCalendarApplicationIcon : SBApplicationIcon <SBCalendarIconImageProviderDelegate> {

	SBCalendarIconImageProvider* _imageProvider;

}

@property (nonatomic,readonly) SBCalendarIconImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
+(Class)downloadingIconClass;
+(BOOL)canGenerateIconsInBackground;
-(id)initWithApplication:(id)arg1 ;
-(SBCalendarIconImageProvider *)imageProvider;
-(void)localeChanged;
-(id)unmaskedIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(id)generateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(void)calendarIconImageProviderHasChanged:(id)arg1 ;
@end

