/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

