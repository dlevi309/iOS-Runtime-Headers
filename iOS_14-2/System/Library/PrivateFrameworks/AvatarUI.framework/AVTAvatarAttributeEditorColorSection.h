/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarAttributeEditorColorSection.h>
@class NSArray, AVTAvatarColorVariationStore;


@protocol AVTAvatarAttributeEditorColorSection <AVTAvatarAttributeEditorSection>
@property (nonatomic,copy,readonly) NSArray * primaryItems; 
@property (nonatomic,copy,readonly) NSArray * extendedItems; 
@property (nonatomic,readonly) BOOL alwaysShowExtended; 
@property (nonatomic,readonly) AVTAvatarColorVariationStore * colorVariationStore; 
@required
-(NSArray *)primaryItems;
-(NSArray *)extendedItems;
-(BOOL)alwaysShowExtended;
-(AVTAvatarColorVariationStore *)colorVariationStore;

@end


@protocol AVTAvatarAttributeEditorSectionSupplementalPicker;
@class NSArray, AVTAvatarColorVariationStore, NSString, AVTAvatarAttributeEditorSectionOptions;

@interface AVTAvatarAttributeEditorColorSection : NSObject <AVTAvatarAttributeEditorColorSection> {

	BOOL _alwaysShowExtended;
	NSString* _localizedName;
	NSString* _identifier;
	id<AVTAvatarAttributeEditorSectionSupplementalPicker> _supplementalPicker;
	AVTAvatarAttributeEditorSectionOptions* _options;
	NSArray* _primaryItems;
	NSArray* _extendedItems;
	AVTAvatarColorVariationStore* _colorVariationStore;

}

@property (nonatomic,copy,readonly) NSArray * primaryItems;                                                         //@synthesize primaryItems=_primaryItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * extendedItems;                                                        //@synthesize extendedItems=_extendedItems - In the implementation block
@property (nonatomic,readonly) BOOL alwaysShowExtended;                                                             //@synthesize alwaysShowExtended=_alwaysShowExtended - In the implementation block
@property (nonatomic,readonly) AVTAvatarColorVariationStore * colorVariationStore;                                  //@synthesize colorVariationStore=_colorVariationStore - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                                                                //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sectionItems; 
@property (nonatomic,copy,readonly) NSString * identifier;                                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) AVTAvatarAttributeEditorSectionOptions * options;                                    //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) id<AVTAvatarAttributeEditorSectionSupplementalPicker> supplementalPicker;              //@synthesize supplementalPicker=_supplementalPicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(AVTAvatarAttributeEditorSectionOptions *)options;
-(NSString *)description;
-(BOOL)shouldDisplayTitle;
-(BOOL)shouldDisplaySeparatorBeforeSection:(id)arg1 ;
-(NSArray *)sectionItems;
-(id<AVTAvatarAttributeEditorSectionSupplementalPicker>)supplementalPicker;
-(void)setSupplementalPicker:(id<AVTAvatarAttributeEditorSectionSupplementalPicker>)arg1 ;
-(NSArray *)primaryItems;
-(NSArray *)extendedItems;
-(BOOL)alwaysShowExtended;
-(AVTAvatarColorVariationStore *)colorVariationStore;
-(NSString *)identifier;
-(id)initWithPrimaryItems:(id)arg1 extendedItems:(id)arg2 colorVariationStore:(id)arg3 localizedName:(id)arg4 identifier:(id)arg5 alwaysShowExtended:(BOOL)arg6 options:(id)arg7 ;
@end

