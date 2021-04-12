/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)done;
-(id)error;
-(void)dealloc;
-(BOOL)skipMaterializedTreeTraversal;
-(id)nextWithError:(id*)arg1 ;
-(unsigned long long)numFoldersPopped;
-(id)initWithURL:(id)arg1 isDirectory:(BOOL)arg2 ;
@end

