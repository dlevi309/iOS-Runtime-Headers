/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/TKPickerSelectableItem.h>
#import <libobjc.A.dylib/TKPickerContainerItem.h>

@class TKTonePickerController, TKTonePickerSectionItem, NSString;

@interface TKTonePickerItem : TKPickerSelectableItem <TKPickerContainerItem> {

	BOOL _needsRoomForCheckmark;
	BOOL _needsActivityIndicator;
	BOOL _needsDownloadProgress;
	float _downloadProgress;
	unsigned long long _itemKind;
	TKTonePickerController* __parentTonePickerController;
	long long _numberOfChildren;

}

@property (assign,setter=_setParentTonePickerController:,nonatomic,__weak) TKTonePickerController * _parentTonePickerController;              //@synthesize _parentTonePickerController=__parentTonePickerController - In the implementation block
@property (assign,setter=_setNumberOfChildren:,nonatomic) long long numberOfChildren;                                                         //@synthesize numberOfChildren=_numberOfChildren - In the implementation block
@property (assign,setter=_setItemKind:,nonatomic) unsigned long long itemKind;                                                                //@synthesize itemKind=_itemKind - In the implementation block
@property (assign,setter=_setNeedsRoomForCheckmark:,nonatomic) BOOL needsRoomForCheckmark;                                                    //@synthesize needsRoomForCheckmark=_needsRoomForCheckmark - In the implementation block
@property (assign,setter=_setNeedsActivityIndicator:,nonatomic) BOOL needsActivityIndicator;                                                  //@synthesize needsActivityIndicator=_needsActivityIndicator - In the implementation block
@property (assign,setter=_setNeedsDownloadProgress:,nonatomic) BOOL needsDownloadProgress;                                                    //@synthesize needsDownloadProgress=_needsDownloadProgress - In the implementation block
@property (assign,setter=_setDownloadProgress:,nonatomic) float downloadProgress;                                                             //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,readonly) TKTonePickerSectionItem * parentSectionItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)childItemAtIndex:(long long)arg1 ;
-(long long)numberOfChildren;
-(unsigned long long)itemKind;
-(float)downloadProgress;
-(void)_setItemKind:(unsigned long long)arg1 ;
-(void)_setDownloadProgress:(float)arg1 ;
-(void)_setNumberOfChildren:(long long)arg1 ;
-(void)_setParentTonePickerController:(id)arg1 ;
-(void)_setNeedsRoomForCheckmark:(BOOL)arg1 ;
-(void)_setNeedsActivityIndicator:(BOOL)arg1 ;
-(void)_setNeedsDownloadProgress:(BOOL)arg1 ;
-(BOOL)needsActivityIndicator;
-(BOOL)needsDownloadProgress;
-(BOOL)needsRoomForCheckmark;
-(TKTonePickerController *)_parentTonePickerController;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
-(TKTonePickerSectionItem *)parentSectionItem;
@end

