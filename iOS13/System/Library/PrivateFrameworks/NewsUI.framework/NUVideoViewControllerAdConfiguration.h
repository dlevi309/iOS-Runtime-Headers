/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NUVideoViewControllerAdConfiguration : NSObject <NSCopying> {

	BOOL _adsEnabled;
	BOOL _allowLeadingAdSlot;

}

@property (getter=areAdsEnabled,nonatomic,readonly) BOOL adsEnabled;              //@synthesize adsEnabled=_adsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL allowLeadingAdSlot;                           //@synthesize allowLeadingAdSlot=_allowLeadingAdSlot - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAdsEnabled:(BOOL)arg1 allowLeadingAdSlot:(BOOL)arg2 ;
-(BOOL)areAdsEnabled;
-(BOOL)allowLeadingAdSlot;
@end

