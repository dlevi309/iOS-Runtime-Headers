/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/

@class NADescriptionBuilder, NSString;


@protocol WKDescribable <NSObject>
@property (nonatomic,readonly) NADescriptionBuilder * wk_descriptionBuilder; 
@property (nonatomic,copy,readonly) NSString * description; 
@property (nonatomic,readonly) id descriptionBuilderBlock; 
@required
-(NSString *)description;
-(id)descriptionBuilderBlock;
-(NADescriptionBuilder *)wk_descriptionBuilder;

@end

