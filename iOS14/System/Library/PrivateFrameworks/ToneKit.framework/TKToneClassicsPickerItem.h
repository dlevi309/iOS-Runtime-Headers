/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/TKTonePickerItem.h>

@class TKTonePickerItem;

@interface TKToneClassicsPickerItem : TKTonePickerItem {

	TKTonePickerItem* _parentItem;
	long long _classicToneIndex;

}

@property (assign,setter=_setParentItem:,nonatomic,__weak) TKTonePickerItem * parentItem;              //@synthesize parentItem=_parentItem - In the implementation block
@property (assign,setter=_setClassicToneIndex:,nonatomic) long long classicToneIndex;                  //@synthesize classicToneIndex=_classicToneIndex - In the implementation block
-(TKTonePickerItem *)parentItem;
-(id)childItemAtIndex:(long long)arg1 ;
-(void)_setClassicToneIndex:(long long)arg1 ;
-(void)_setParentItem:(id)arg1 ;
-(long long)classicToneIndex;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
@end

