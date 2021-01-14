/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
*/


@class NSString, NSIndexPath, SAMPCollection;

@interface POPodcastModelObject : NSObject {

	NSString* _uuid;
	NSString* _title;
	NSString* _feedUrl;
	NSIndexPath* _indexPath;

}

@property (retain) NSString * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (retain) NSString * feedUrl;                             //@synthesize feedUrl=_feedUrl - In the implementation block
@property (retain) NSIndexPath * indexPath;                        //@synthesize indexPath=_indexPath - In the implementation block
@property (readonly) SAMPCollection * SAMPCollection; 
+(id)uriScheme;
+(Class)SAMPClass;
-(NSString *)uuid;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)indexPath;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)feedUrl;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)title;
-(void)setFeedUrl:(NSString *)arg1 ;
-(SAMPCollection *)SAMPCollection;
@end

