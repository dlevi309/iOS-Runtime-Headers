/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

@class NSString, NSArray, NSSet;


@protocol FCForYouBridgedFeedGroup
@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) NSArray * headlines; 
@property (readonly,nonatomic) NSArray * webEmbedURLs; 
@property (readonly,nonatomic) NSArray * assetHandles; 
@property (readonly,nonatomic) NSSet * equivalentTopicIDs; 
@property (readonly,nonatomic) id<FCTagProviding> backingTag; 
@required
-(id<FCTagProviding>)backingTag;
-(NSSet *)equivalentTopicIDs;
-(NSArray *)headlines;
-(NSArray *)assetHandles;
-(NSString *)identifier;
-(NSArray *)webEmbedURLs;

@end

