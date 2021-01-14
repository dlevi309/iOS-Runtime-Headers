/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFiTunesCollectionObject.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSURL, NSDictionary;

@interface WFiTunesPodcastObject : WFiTunesCollectionObject <MTLJSONSerializing> {

	NSString* _podcastUUID;
	NSURL* _feedURL;

}

@property (nonatomic,copy) NSString * podcastUUID;                               //@synthesize podcastUUID=_podcastUUID - In the implementation block
@property (nonatomic,retain) NSURL * feedURL;                                    //@synthesize feedURL=_feedURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
-(id)podcastQueryDictionary;
-(NSURL *)feedURL;
-(void)setFeedURL:(NSURL *)arg1 ;
-(id)initWithName:(id)arg1 identifier:(id)arg2 podcastUUID:(id)arg3 feedURL:(id)arg4 kind:(id)arg5 ;
-(NSString *)podcastUUID;
-(void)setPodcastUUID:(NSString *)arg1 ;
@end

