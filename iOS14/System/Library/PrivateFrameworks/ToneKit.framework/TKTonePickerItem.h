/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <ToneKit/TKPickerSelectableItem.h>
#import <libobjc.A.dylib/TKPickerContainerItem.h>

@class TKTonePickerSectionItem, NSArray, NSString;

@interface TKTonePickerItem : TKPickerSelectableItem <TKPickerContainerItem> {

	BOOL _needsRoomForCheckmark;
	BOOL _needsActivityIndicator;
	BOOL _needsDownloadProgress;
	float _downloadProgress;
	unsigned long long _itemKind;
	TKTonePickerSectionItem* _parentSectionItem;
	NSArray* _childrenToneClassicsPickerItems;

}

@property (assign,setter=_setParentSectionItem:,nonatomic,__weak) TKTonePickerSectionItem * parentSectionItem;                 //@synthesize parentSectionItem=_parentSectionItem - In the implementation block
@property (setter=_setChildrenToneClassicsPickerItems:,nonatomic,copy) NSArray * childrenToneClassicsPickerItems;              //@synthesize childrenToneClassicsPickerItems=_childrenToneClassicsPickerItems - In the implementation block
@property (assign,setter=_setItemKind:,nonatomic) unsigned long long itemKind;                                                 //@synthesize itemKind=_itemKind - In the implementation block
@property (assign,setter=_setNeedsRoomForCheckmark:,nonatomic) BOOL needsRoomForCheckmark;                                     //@synthesize needsRoomForCheckmark=_needsRoomForCheckmark - In the implementation block
@property (assign,setter=_setNeedsActivityIndicator:,nonatomic) BOOL needsActivityIndicator;                                   //@synthesize needsActivityIndicator=_needsActivityIndicator - In the implementation block
@property (assign,setter=_setNeedsDownloadProgress:,nonatomic) BOOL needsDownloadProgress;                                     //@synthesize needsDownloadProgress=_needsDownloadProgress - In the implementation block
@property (assign,setter=_setDownloadProgress:,nonatomic) float downloadProgress;                                              //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,readonly) long long numberOfChildren; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)itemKind;
-(float)downloadProgress;
-(id)childItemAtIndex:(long long)arg1 ;
-(void)_setItemKind:(unsigned long long)arg1 ;
-(long long)numberOfChildren;
-(void)_setDownloadProgress:(float)arg1 ;
-(void)_setParentSectionItem:(id)arg1 ;
-(void)_setNeedsRoomForCheckmark:(BOOL)arg1 ;
-(void)_setNeedsActivityIndicator:(BOOL)arg1 ;
-(void)_setNeedsDownloadProgress:(BOOL)arg1 ;
-(void)_setChildrenToneClassicsPickerItems:(id)arg1 ;
-(BOOL)needsActivityIndicator;
-(BOOL)needsDownloadProgress;
-(BOOL)needsRoomForCheckmark;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
-(TKTonePickerSectionItem *)parentSectionItem;
-(NSArray *)childrenToneClassicsPickerItems;
@end

