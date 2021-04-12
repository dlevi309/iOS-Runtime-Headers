/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCTranslationProvider.h>

@class NSString, NSDictionary;

@interface FCTranslationMap : NSObject <FCTranslationProvider> {

	NSString* _resourceID;
	NSDictionary* _topicTranslationMap;
	NSDictionary* _favoriteTranslationMap;

}

@property (nonatomic,retain) NSString * resourceID;                              //@synthesize resourceID=_resourceID - In the implementation block
@property (nonatomic,retain) NSDictionary * topicTranslationMap;                 //@synthesize topicTranslationMap=_topicTranslationMap - In the implementation block
@property (nonatomic,retain) NSDictionary * favoriteTranslationMap;              //@synthesize favoriteTranslationMap=_favoriteTranslationMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)resourceID;
-(id)topicTranslationForTagID:(id)arg1 ;
-(NSDictionary *)topicTranslationMap;
-(NSDictionary *)favoriteTranslationMap;
-(id)favoriteTranslationForTagID:(id)arg1 ;
-(id)initWithPBTranslationMap:(id)arg1 resourceID:(id)arg2 ;
-(void)setResourceID:(NSString *)arg1 ;
-(void)setTopicTranslationMap:(NSDictionary *)arg1 ;
-(void)setFavoriteTranslationMap:(NSDictionary *)arg1 ;
@end

