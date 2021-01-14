/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
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
-(long long)revisionType;
-(void)setRevisionType:(long long)arg1 ;
-(unsigned long long)revisionID;
-(NSString *)objectID;
-(void)setObjectID:(NSString *)arg1 ;
-(id)description;
-(void)setRevisionID:(unsigned long long)arg1 ;
-(void)setIsPodcastCollection:(BOOL)arg1 ;
-(id)deletedModelObject;
-(BOOL)isPodcastCollection;
@end

