/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

@class NSString;


@protocol AVTAvatarAttributeEditorSectionItemPrefetching <NSObject>
@property (nonatomic,copy,readonly) NSString * prefetchingIdentifier; 
@property (nonatomic,copy,readonly) id thumbnailProvider; 
@property (nonatomic,copy,readonly) id presetResourcesProvider; 
@required
-(id)presetResourcesProvider;
-(id)thumbnailProvider;
-(NSString *)prefetchingIdentifier;

@end

