/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class NSMutableArray, BRCPrivateClientZone, BRCItemID, BRCALRowID, NSString;

@interface BRCSharingProcessFolderSubitemsOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	unsigned long long _rowID;
	unsigned long long _processType;
	unsigned long long _batchSize;
	unsigned long long _failedSubitemsLeft;
	NSMutableArray* _sharedClientSubitems;
	NSMutableArray* _aliasItemsToDelete;
	NSMutableArray* _shareIDsToDelete;
	BRCPrivateClientZone* _rootClientZone;
	BRCItemID* _rootItemID;
	BRCALRowID* _appLibraryRowID;
	BOOL _isFSRoot;
	BOOL _alreadyHasShareID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)main;
-(void)removeSharedSubitemsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_completeAfterProcessingClientTruthIfNecessaryWithError:(id)arg1 ;
-(BOOL)_completeAfterProcessingServerTruthIfNecessaryWithError:(id)arg1 ;
-(void)processServerTruthWithCompletion:(/*^block*/id)arg1 ;
-(void)processClientTruthWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithItem:(id)arg1 processType:(unsigned long long)arg2 maxSubitemsToFail:(unsigned long long)arg3 ;
-(id)computeURLForItemID:(id)arg1 rootURL:(id)arg2 ;
@end

