/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <Foundation/NSProgress.h>

@class NSMutableDictionary, NSArray, BRCAccountSession;

@interface BRCProgress : NSProgress {

	NSMutableDictionary* _progressByAliasContainerID;
	BOOL _published;
	NSArray* _parentFileIDs;
	BRCAccountSession* _session;
	char _group;

}

@property (nonatomic,readonly) NSArray * parentFileIDs;              //@synthesize parentFileIDs=_parentFileIDs - In the implementation block
@property (nonatomic,readonly) BOOL isPublished;                     //@synthesize published=_published - In the implementation block
+(id)_progressForDocument:(id)arg1 group:(char)arg2 sizeInfo:(id)arg3 ;
+(id)downloadProgressForDocument:(id)arg1 sizeInfo:(id)arg2 ;
+(id)uploadProgressForDocument:(id)arg1 sizeInfo:(id)arg2 ;
-(NSArray *)parentFileIDs;
-(void)setCompletedUnitCount:(long long)arg1 ;
-(BOOL)isPublished;
-(void)brc_publish;
-(void)brc_unpublish;
-(id)initWithGroup:(char)arg1 parentFileIDs:(id)arg2 session:(id)arg3 ;
-(void)addAliasItem:(id)arg1 ;
@end

