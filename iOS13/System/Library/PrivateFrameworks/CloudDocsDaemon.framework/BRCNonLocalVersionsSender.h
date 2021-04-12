/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRNonLocalVersionSending.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@protocol BRNonLocalVersionReceiving, GSAdditionStoring;
@class BRCItemID, BRCStatInfo, NSString, NSObject, BRCXPCClient, BRCServerZone, BRCAppLibrary, CKRecordID, NSURL;

@interface BRCNonLocalVersionsSender : _BRCOperation <BRNonLocalVersionSending, BRCOperationSubclass> {

	id<BRNonLocalVersionReceiving> _receiver;
	BRCItemID* _itemID;
	BRCStatInfo* _st;
	NSString* _currentEtag;
	NSString* _storagePathPrefix;
	NSObject*<GSAdditionStoring> _storage;
	BRCXPCClient* _client;
	BRCServerZone* _serverZone;
	BRCAppLibrary* _appLibrary;
	CKRecordID* _recordID;
	/*^block*/id _reply;
	BOOL _includeCachedVersions;
	NSURL* _logicalURL;
	NSURL* _physicalURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * logicalURL;                    //@synthesize logicalURL=_logicalURL - In the implementation block
@property (nonatomic,readonly) NSURL * physicalURL;                   //@synthesize physicalURL=_physicalURL - In the implementation block
@property (assign,nonatomic) BOOL includeCachedVersions;              //@synthesize includeCachedVersions=_includeCachedVersions - In the implementation block
+(id)senderWithLookup:(id)arg1 client:(id)arg2 XPCReceiver:(id)arg3 error:(id*)arg4 ;
-(oneway void)invalidate;
-(NSURL *)logicalURL;
-(void)main;
-(NSURL *)physicalURL;
-(void)setIncludeCachedVersions:(BOOL)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)listNonLocalVersionsWithReply:(/*^block*/id)arg1 ;
-(BOOL)includeCachedVersions;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(id)initWithDocument:(id)arg1 serverItem:(id)arg2 relpath:(id)arg3 client:(id)arg4 XPCReceiver:(id)arg5 error:(id*)arg6 ;
-(id)_fetchThumbnailOperationForVersionRecord:(id)arg1 physicalURL:(id)arg2 ;
-(id)_depsTrackingOperation;
-(id)_fetchVersionsOperationWithDepsOp:(id)arg1 ;
@end

