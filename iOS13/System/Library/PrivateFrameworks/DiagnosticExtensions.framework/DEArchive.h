/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
*/


#import <DiagnosticExtensions/DiagnosticExtensions-Structs.h>
@class NSURL;

@interface DEArchive : NSObject {

	archiveRef _archive;
	BOOL _hasClosedArchive;
	NSURL* _tarGzUrl;
	NSURL* _sourceDir;

}

@property (retain) NSURL * tarGzUrl;               //@synthesize tarGzUrl=_tarGzUrl - In the implementation block
@property (retain) NSURL * sourceDir;              //@synthesize sourceDir=_sourceDir - In the implementation block
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)closeArchive;
-(BOOL)addFile:(id)arg1 withPathName:(id)arg2 ;
-(NSURL *)tarGzUrl;
-(archiveRef)archiverForUrl:(id)arg1 ;
-(void)setTarGzUrl:(NSURL *)arg1 ;
-(NSURL *)sourceDir;
-(void)setSourceDir:(NSURL *)arg1 ;
@end

