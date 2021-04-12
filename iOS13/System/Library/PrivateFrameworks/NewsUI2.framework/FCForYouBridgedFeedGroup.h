/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

@class NSString, NSArray, NSSet;


@protocol FCForYouBridgedFeedGroup
@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) NSArray * headlines; 
@property (readonly,nonatomic) NSArray * webEmbedURLs; 
@property (readonly,nonatomic) NSArray * assetHandles; 
@property (readonly,nonatomic) NSSet * equivalentTopicIDs; 
@property (readonly,nonatomic) NSString * backingTagID; 
@required
-(NSString *)identifier;
-(NSArray *)headlines;
-(NSString *)backingTagID;
-(NSSet *)equivalentTopicIDs;
-(NSArray *)assetHandles;
-(NSArray *)webEmbedURLs;

@end

