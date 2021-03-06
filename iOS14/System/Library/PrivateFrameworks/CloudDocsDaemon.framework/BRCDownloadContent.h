/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCDownload.h>

@class BRCServerZone, NSIndexSet, BRCProgress;

@interface BRCDownloadContent : BRCDownload {

	unsigned long long _liveFileID;
	unsigned _liveDocumentID;
	BOOL _liveItemIsPackage;
	BRCServerZone* _zone;
	BOOL _isFinderBookmark;
	BOOL _requiresTwoPhase;
	NSIndexSet* _desiredIndices;

}

@property (nonatomic,readonly) BOOL liveItemIsPackage;                     //@synthesize liveItemIsPackage=_liveItemIsPackage - In the implementation block
@property (nonatomic,readonly) unsigned liveDocumentID;                    //@synthesize liveDocumentID=_liveDocumentID - In the implementation block
@property (nonatomic,readonly) unsigned long long liveFileID;              //@synthesize liveFileID=_liveFileID - In the implementation block
@property (nonatomic,readonly) NSIndexSet * desiredIndices;                //@synthesize desiredIndices=_desiredIndices - In the implementation block
@property (nonatomic,readonly) BOOL requiresTwoPhase;                      //@synthesize requiresTwoPhase=_requiresTwoPhase - In the implementation block
@property (nonatomic,retain) BRCProgress * progress; 
-(int)kind;
-(id)description;
-(void)setProgress:(BRCProgress *)arg1 ;
-(BOOL)requiresTwoPhase;
-(id)initWithDocument:(id)arg1 stageID:(id)arg2 ;
-(BOOL)_stageWithSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)_prepareSecondStageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 error:(id*)arg4 ;
-(BOOL)_stageWithSession:(id)arg1 manifest:(id)arg2 package:(id)arg3 xattrsPackage:(id)arg4 error:(id*)arg5 ;
-(BOOL)liveItemIsPackage;
-(unsigned)liveDocumentID;
-(NSIndexSet *)desiredIndices;
-(unsigned long long)liveFileID;
@end

