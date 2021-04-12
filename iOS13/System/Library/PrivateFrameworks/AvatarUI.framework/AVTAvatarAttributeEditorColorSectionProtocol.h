/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

@class AVTAvatarColorVariationStore, NSArray;


@protocol AVTAvatarAttributeEditorColorSectionProtocol <AVTAvatarAttributeEditorSection>
@property (nonatomic,readonly) AVTAvatarColorVariationStore * colorVariationStore; 
@property (nonatomic,copy,readonly) NSArray * primaryItems; 
@property (nonatomic,copy,readonly) NSArray * extendedItems; 
@property (nonatomic,readonly) BOOL alwaysShowExtended; 
@required
-(AVTAvatarColorVariationStore *)colorVariationStore;
-(NSArray *)primaryItems;
-(NSArray *)extendedItems;
-(BOOL)alwaysShowExtended;

@end

