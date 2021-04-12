/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
*/


@class NSString;

@interface POPodcastRevision : NSObject {

	BOOL _isPodcastCollection;
	unsigned long long _revisionID;
	long long _revisionType;
	NSString* _objectID;

}

@property (assign,nonatomic) unsigned long long revisionID;              //@synthesize revisionID=_revisionID - In the implementation block
@property (assign,nonatomic) long long revisionType;                     //@synthesize revisionType=_revisionType - In the implementation block
@property (nonatomic,retain) NSString * objectID;                        //@synthesize objectID=_objectID - In the implementation block
@property (assign) BOOL isPodcastCollection;                             //@synthesize isPodcastCollection=_isPodcastCollection - In the implementation block
-(id)description;
-(NSString *)objectID;
-(void)setObjectID:(NSString *)arg1 ;
-(unsigned long long)revisionID;
-(void)setRevisionID:(unsigned long long)arg1 ;
-(long long)revisionType;
-(void)setRevisionType:(long long)arg1 ;
-(void)setIsPodcastCollection:(BOOL)arg1 ;
-(id)deletedModelObject;
-(BOOL)isPodcastCollection;
@end

