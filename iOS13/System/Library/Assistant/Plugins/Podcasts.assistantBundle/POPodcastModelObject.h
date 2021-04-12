/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSIndexPath *)indexPath;
-(NSString *)uuid;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)setFeedUrl:(NSString *)arg1 ;
-(NSString *)feedUrl;
-(SAMPCollection *)SAMPCollection;
@end

