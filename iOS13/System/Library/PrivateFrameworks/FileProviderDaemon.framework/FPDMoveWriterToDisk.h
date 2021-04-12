/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/FPDMoveWriterExecutor.h>

@class FPDMoveWriter, NSFileManager;

@interface FPDMoveWriterToDisk : NSObject <FPDMoveWriterExecutor> {

	FPDMoveWriter* _writer;
	NSFileManager* _fileManager;
	BOOL _stopAccessingDestination;

}
-(void)dealloc;
-(id)initWithWriter:(id)arg1 ;
-(void)_performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 bounceNumber:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_respectLastUsageDatePolicyForDestinationURL:(id)arg1 ;
-(void)_performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 bounceNumber:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_resolveLocator:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performMoveOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)performCreateFolder:(id)arg1 inside:(id)arg2 as:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)performCopyOfItem:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)performMoveOfFolder:(id)arg1 to:(id)arg2 as:(id)arg3 sourceMaterializeOption:(unsigned long long)arg4 targetMaterializeOption:(unsigned long long)arg5 atomically:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
@end

