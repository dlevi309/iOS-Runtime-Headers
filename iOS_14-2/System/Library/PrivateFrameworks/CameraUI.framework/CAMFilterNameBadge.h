/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraEditKit/CEKBadgeTextView.h>

@interface CAMFilterNameBadge : CEKBadgeTextView {

	long long _filterType;

}

@property (assign,nonatomic) long long filterType;              //@synthesize filterType=_filterType - In the implementation block
-(long long)filterType;
-(void)setFilterType:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateText;
@end

