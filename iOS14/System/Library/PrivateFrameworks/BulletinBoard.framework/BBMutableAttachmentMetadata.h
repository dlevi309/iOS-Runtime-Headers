/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <BulletinBoard/BBAttachmentMetadata.h>

@class NSURL, NSString, NSDictionary;

@interface BBMutableAttachmentMetadata : BBAttachmentMetadata

@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * uniformType; 
@property (nonatomic,copy) NSDictionary * thumbnailGeneratorUserInfo; 
@property (assign,nonatomic) BOOL thumbnailHidden; 
@property (assign,nonatomic) BOOL hiddenFromDefaultExpandedView; 
-(void)setURL:(NSURL *)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setUniformType:(NSString *)arg1 ;
-(void)setThumbnailHidden:(BOOL)arg1 ;
-(void)setHiddenFromDefaultExpandedView:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setThumbnailGeneratorUserInfo:(NSDictionary *)arg1 ;
@end

