/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/


@class NSArray, BRFileObjectID, NSURL;

@interface BRQueryStitch : NSObject {

	NSArray* _contexts;
	BRFileObjectID* _objid;
	char _kind;
	NSURL* _fromURL;
	NSURL* _url;

}

@property (nonatomic,retain) NSURL * fromURL;                 //@synthesize fromURL=_fromURL - In the implementation block
@property (nonatomic,retain) NSArray * contexts;              //@synthesize contexts=_contexts - In the implementation block
-(void)dealloc;
-(id)description;
-(void)done;
-(void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;
-(void)_deletionDone;
-(void)_creationDone;
-(void)_renameDone;
-(id)initWithURL:(id)arg1 objid:(id)arg2 kind:(char)arg3 ;
-(void)setQueries:(id)arg1 ;
-(NSURL *)fromURL;
-(void)setFromURL:(NSURL *)arg1 ;
-(NSArray *)contexts;
-(void)setContexts:(NSArray *)arg1 ;
@end

