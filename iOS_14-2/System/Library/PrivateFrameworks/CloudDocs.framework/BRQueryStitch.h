/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setQueries:(id)arg1 ;
-(void)done;
-(NSURL *)fromURL;
-(id)description;
-(void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;
-(void)_deletionDone;
-(void)_creationDone;
-(void)_renameDone;
-(id)initWithURL:(id)arg1 objid:(id)arg2 kind:(char)arg3 ;
-(void)setFromURL:(NSURL *)arg1 ;
-(void)setContexts:(NSArray *)arg1 ;
-(NSArray *)contexts;
-(void)dealloc;
@end

