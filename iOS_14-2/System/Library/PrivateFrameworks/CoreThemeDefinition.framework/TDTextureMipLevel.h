/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreData/NSManagedObject.h>

@class TDTextureRenditionSpec, TDTextureImageRenditionSpec, TDTextureFace;

@interface TDTextureMipLevel : NSManagedObject

@property (assign,nonatomic) short level; 
@property (nonatomic,retain) TDTextureRenditionSpec * texture; 
@property (nonatomic,retain) TDTextureImageRenditionSpec * textureImage; 
@property (nonatomic,retain) TDTextureFace * face; 
@end

