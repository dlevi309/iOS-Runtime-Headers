/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <BulletinBoard/BBAttachmentMetadata.h>

@class NSUUID, NSURL;

@interface BBMutableAttachmentMetadata : BBAttachmentMetadata

@property (nonatomic,copy) NSUUID * UUID; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSURL * URL; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
@end

