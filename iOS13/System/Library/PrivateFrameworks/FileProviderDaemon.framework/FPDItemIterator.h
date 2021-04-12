/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <FileProviderDaemon/FPDIterator.h>
#import <libobjc.A.dylib/FPXEnumeratorObserver.h>
#import <libobjc.A.dylib/FPDLifetimeExtender.h>

@protocol OS_dispatch_queue;
@class NSObject, FPItem, NSError, NSMutableArray, FPDExtension, FPDDomain, NSString;

@interface FPDItemIterator : FPDIterator <FPXEnumeratorObserver, FPDLifetimeExtender> {

	NSObject*<OS_dispatch_queue> _queue;
	FPItem* _current;
	unsigned long long _numFoldersPoped;
	BOOL _done;
	NSError* _error;
	NSMutableArray* _enumeratorByDepth;
	NSMutableArray* _remainingItemsByDepth;
	FPDExtension* _provider;
	FPDDomain* _domain;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int requestEffectivePID; 
@property (readonly) NSString * prettyDescription; 
-(void)dealloc;
-(id)error;
-(void)_next;
-(BOOL)done;
-(void)_invalidateWithError:(id)arg1 ;
-(void)enumerationResultsDidChange;
-(NSString *)prettyDescription;
-(void)didUpdateItem:(id)arg1 ;
-(void)_pushFolder:(id)arg1 ;
-(void)_popFolder;
-(int)requestEffectivePID;
-(void)_decorateItem:(id)arg1 ;
-(BOOL)_createEnumerator;
-(BOOL)_enumerateMoreItems;
-(id)_popItem;
-(BOOL)_shouldTraverseSubTree:(id)arg1 ;
-(id)initWithItem:(id)arg1 provider:(id)arg2 ;
-(id)nextWithError:(id*)arg1 ;
-(unsigned long long)numFoldersPopped;
@end

