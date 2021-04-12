/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
-(NSURL *)feedURL;
-(id)initWithName:(id)arg1 identifier:(id)arg2 podcastUUID:(id)arg3 feedURL:(id)arg4 kind:(id)arg5 ;
-(NSString *)podcastUUID;
-(void)setPodcastUUID:(NSString *)arg1 ;
-(void)setFeedURL:(NSURL *)arg1 ;
@end

