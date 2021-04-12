/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)topicTranslationForTagID:(id)arg1 ;
-(NSString *)resourceID;
-(NSDictionary *)topicTranslationMap;
-(NSDictionary *)favoriteTranslationMap;
-(id)favoriteTranslationForTagID:(id)arg1 ;
-(id)initWithPBTranslationMap:(id)arg1 resourceID:(id)arg2 ;
-(void)setResourceID:(NSString *)arg1 ;
-(void)setTopicTranslationMap:(NSDictionary *)arg1 ;
-(void)setFavoriteTranslationMap:(NSDictionary *)arg1 ;
@end

