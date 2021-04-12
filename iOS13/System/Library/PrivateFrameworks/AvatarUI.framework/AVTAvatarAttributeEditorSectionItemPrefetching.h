/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

@class NSString;


@protocol AVTAvatarAttributeEditorSectionItemPrefetching <NSObject>
@property (nonatomic,copy,readonly) NSString * prefetchingIdentifier; 
@property (nonatomic,copy,readonly) id thumbnailProvider; 
@property (nonatomic,copy,readonly) id presetResourcesProvider; 
@required
-(id)thumbnailProvider;
-(id)presetResourcesProvider;
-(NSString *)prefetchingIdentifier;

@end

