/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarAttributeEditorColorSectionProtocol.h>

@protocol AVTAvatarAttributeEditorHeaderPicker;
@class AVTAvatarColorVariationStore, NSArray, NSString;

@interface AVTAvatarAttributeEditorColorSection : NSObject <AVTAvatarAttributeEditorColorSectionProtocol> {

	BOOL _alwaysShowExtended;
	NSString* _localizedName;
	NSString* _identifier;
	id<AVTAvatarAttributeEditorHeaderPicker> _headerAccessory;
	NSArray* _primaryItems;
	NSArray* _extendedItems;
	AVTAvatarColorVariationStore* _colorVariationStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * localizedName;                                                //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sectionItems; 
@property (nonatomic,copy,readonly) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id<AVTAvatarAttributeEditorHeaderPicker> headerAccessory;              //@synthesize headerAccessory=_headerAccessory - In the implementation block
@property (nonatomic,readonly) AVTAvatarColorVariationStore * colorVariationStore;                  //@synthesize colorVariationStore=_colorVariationStore - In the implementation block
@property (nonatomic,copy,readonly) NSArray * primaryItems;                                         //@synthesize primaryItems=_primaryItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * extendedItems;                                        //@synthesize extendedItems=_extendedItems - In the implementation block
@property (nonatomic,readonly) BOOL alwaysShowExtended;                                             //@synthesize alwaysShowExtended=_alwaysShowExtended - In the implementation block
-(NSString *)description;
-(NSString *)identifier;
-(NSString *)localizedName;
-(void)setLocalizedName:(NSString *)arg1 ;
-(BOOL)shouldDisplayTitle;
-(BOOL)shouldDisplaySeparatorBeforeSection:(id)arg1 ;
-(NSArray *)sectionItems;
-(id<AVTAvatarAttributeEditorHeaderPicker>)headerAccessory;
-(void)setHeaderAccessory:(id<AVTAvatarAttributeEditorHeaderPicker>)arg1 ;
-(AVTAvatarColorVariationStore *)colorVariationStore;
-(NSArray *)primaryItems;
-(NSArray *)extendedItems;
-(BOOL)alwaysShowExtended;
-(id)initWithPrimaryItems:(id)arg1 extendedItems:(id)arg2 colorVariationStore:(id)arg3 localizedName:(id)arg4 identifier:(id)arg5 alwaysShowExtended:(BOOL)arg6 ;
@end

