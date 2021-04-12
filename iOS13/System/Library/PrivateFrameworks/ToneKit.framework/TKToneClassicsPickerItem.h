/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/TKTonePickerItem.h>

@class TKTonePickerItem;

@interface TKToneClassicsPickerItem : TKTonePickerItem {

	long long _classicToneIndex;

}

@property (assign,setter=_setClassicToneIndex:,nonatomic) long long classicToneIndex;              //@synthesize classicToneIndex=_classicToneIndex - In the implementation block
@property (nonatomic,readonly) TKTonePickerItem * parentItem; 
-(id)childItemAtIndex:(long long)arg1 ;
-(TKTonePickerItem *)parentItem;
-(void)_setClassicToneIndex:(long long)arg1 ;
-(long long)classicToneIndex;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
@end

