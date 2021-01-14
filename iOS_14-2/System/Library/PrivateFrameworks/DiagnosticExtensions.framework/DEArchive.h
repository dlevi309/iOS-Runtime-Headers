/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)closeArchive;
-(id)initWithURL:(id)arg1 ;
-(archiveRef)archiverForUrl:(id)arg1 ;
-(BOOL)addFile:(id)arg1 withPathName:(id)arg2 ;
-(void)setTarGzUrl:(NSURL *)arg1 ;
-(NSURL *)sourceDir;
-(void)setSourceDir:(NSURL *)arg1 ;
-(NSURL *)tarGzUrl;
-(void)dealloc;
@end

