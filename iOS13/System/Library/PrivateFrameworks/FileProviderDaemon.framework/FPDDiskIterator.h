/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <FileProviderDaemon/FileProviderDaemon-Structs.h>
#import <FileProviderDaemon/FPDIterator.h>

@class NSURL, NSError;

@interface FPDDiskIterator : FPDIterator {

	NSURL* _rootURL;
	BOOL _stopAccessingRoot;
	BOOL _sentRoot;
	BOOL _lastItemWasPackage;
	BOOL _done;
	NSError* _error;
	unsigned long long _numFoldersPopped;
	CFURLEnumeratorRef _enumerator;

}
-(void)dealloc;
-(id)error;
-(BOOL)done;
-(BOOL)skipMaterializedTreeTraversal;
-(id)nextWithError:(id*)arg1 ;
-(unsigned long long)numFoldersPopped;
-(id)initWithURL:(id)arg1 isDirectory:(BOOL)arg2 ;
@end

