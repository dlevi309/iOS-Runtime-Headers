/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardHome/SBDownloadingIcon.h>
#import <libobjc.A.dylib/SBCalendarIconImageProviderDelegate.h>

@class SBCalendarIconImageProvider;

@interface SBCalendarDownloadingIcon : SBDownloadingIcon <SBCalendarIconImageProviderDelegate> {

	SBCalendarIconImageProvider* _imageProvider;

}

@property (nonatomic,readonly) SBCalendarIconImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
+(BOOL)canGenerateIconsInBackground;
-(void)localeChanged;
-(id)initWithDownloadingIconDataSource:(id)arg1 ;
-(void)calendarIconImageProviderHasChanged:(id)arg1 ;
-(id)generateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(SBCalendarIconImageProvider *)imageProvider;
-(id)unmaskedIconImageWithInfo:(SBIconImageInfo)arg1 ;
@end

