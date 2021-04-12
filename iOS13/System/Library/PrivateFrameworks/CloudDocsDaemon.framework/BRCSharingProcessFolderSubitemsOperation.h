/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class NSMutableArray, BRCPrivateClientZone, BRCItemID, BRCALRowID, NSString;

@interface BRCSharingProcessFolderSubitemsOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	unsigned long long _rowID;
	unsigned long long _batchSize;
	unsigned long long _failedSubitemsLeft;
	unsigned long long _processType;
	NSMutableArray* _sharedClientSubitems;
	NSMutableArray* _aliasItemsToDelete;
	NSMutableArray* _shareIDsToDelete;
	BRCPrivateClientZone* _rootClientZone;
	BRCItemID* _rootItemID;
	BRCALRowID* _appLibraryRowID;
	BOOL _isFSRoot;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(void)removeSharedSubitemsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_completeAfterProcessingClientTruthIfNecessaryWithError:(id)arg1 ;
-(BOOL)_completeAfterProcessingServerTruthIfNecessaryWithError:(id)arg1 ;
-(void)processServerTruthWithCompletion:(/*^block*/id)arg1 ;
-(void)processClientTruthWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithItem:(id)arg1 processType:(unsigned long long)arg2 maxSubitemsToFail:(unsigned long long)arg3 ;
-(id)computeURLForItemID:(id)arg1 rootURL:(id)arg2 ;
@end

