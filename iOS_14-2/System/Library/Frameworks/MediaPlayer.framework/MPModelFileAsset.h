/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelFileAsset : MPModelObject

@property (nonatomic,copy) NSString * filePath; 
@property (assign,nonatomic) unsigned long long fileSize; 
@property (assign,nonatomic) long long protectionType; 
@property (assign,getter=isNonPurgeable,nonatomic) BOOL nonPurgeable; 
@property (nonatomic,copy) NSString * purchaseBundleFilePath; 
@property (assign,nonatomic) long long qualityType; 
+(id)__fileSize_KEY;
+(id)__filePath_KEY;
+(id)__protectionType_KEY;
+(id)__nonPurgeable_KEY;
+(id)__purchaseBundleFilePath_KEY;
+(id)__qualityType_KEY;
+(id)allSupportedProperties;
@end

