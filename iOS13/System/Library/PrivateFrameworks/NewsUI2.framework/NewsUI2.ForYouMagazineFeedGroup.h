/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCForYouBridgedFeedGroup.h>

@class NSString, NSArray, NSSet;

@interface NewsUI2.ForYouMagazineFeedGroup : NSObject <FCForYouBridgedFeedGroup> {

	??? group;
	 identifier;
	 headlines;
	 assetHandles;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) NSArray * headlines; 
@property (readonly,nonatomic) NSArray * assetHandles; 
@property (readonly,nonatomic) NSSet * equivalentTopicIDs; 
@property (readonly,nonatomic) NSArray * webEmbedURLs; 
@property (readonly,nonatomic) NSString * backingTagID; 
-(id)init;
-(NSString *)identifier;
-(NSArray *)headlines;
-(NSString *)backingTagID;
-(NSSet *)equivalentTopicIDs;
-(NSArray *)assetHandles;
-(NSArray *)webEmbedURLs;
@end

