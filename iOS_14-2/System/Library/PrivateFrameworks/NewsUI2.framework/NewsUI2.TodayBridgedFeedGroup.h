/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCForYouBridgedFeedGroup.h>

@class NSArray, NSSet, NSString;

@interface NewsUI2.TodayBridgedFeedGroup : _UKNOWN_SUPERCLASS_ <FCForYouBridgedFeedGroup> {

	 emitter;

}

@property (readonly,nonatomic) NSArray * assetHandles; 
@property (readonly,nonatomic) NSArray * headlines; 
@property (readonly,nonatomic) NSArray * webEmbedURLs; 
@property (readonly,nonatomic) NSSet * equivalentTopicIDs; 
@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) id<FCTagProviding> backingTag; 
-(id<FCTagProviding>)backingTag;
-(NSSet *)equivalentTopicIDs;
-(NSArray *)headlines;
-(NSArray *)assetHandles;
-(NSString *)identifier;
-(NSArray *)webEmbedURLs;
@end

