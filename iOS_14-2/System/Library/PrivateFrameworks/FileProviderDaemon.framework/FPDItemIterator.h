/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_next;
-(void)enumerationResultsDidChange;
-(NSString *)prettyDescription;
-(void)_pushFolder:(id)arg1 ;
-(void)_popFolder;
-(BOOL)done;
-(id)error;
-(void)didUpdateItem:(id)arg1 ;
-(void)_invalidateWithError:(id)arg1 ;
-(void)dealloc;
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

