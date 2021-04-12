/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSData, LogHead;

@interface MapHead : GPBMessage

@property (assign,nonatomic) unsigned long long logBeginningMs; 
@property (nonatomic,copy) NSData * mapHeadHash; 
@property (assign,nonatomic) int application; 
@property (nonatomic,retain) LogHead * changeLogHead; 
@property (assign,nonatomic) BOOL hasChangeLogHead; 
@property (assign,nonatomic) unsigned long long revision; 
@property (assign,nonatomic) int mapType; 
@property (assign,nonatomic) unsigned long long treeId; 
+(id)descriptor;
@end

