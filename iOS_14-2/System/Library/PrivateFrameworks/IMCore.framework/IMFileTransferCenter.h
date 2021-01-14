/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMFileTransferCenter.h>

@protocol IMFileTransferCenter <NSObject>
@required
-(void)registerTransferWithDaemon:(id)arg1;
-(id)guidForNewOutgoingTransferWithLocalURL:(id)arg1;

@end


@class NSMutableDictionary, NSMutableArray, NSMutableSet, NSDictionary, NSArray, NSString;

@interface IMFileTransferCenter : NSObject <IMFileTransferCenter> {

	NSMutableDictionary* _guidToTransferMap;
	NSMutableDictionary* _guidToRemovedTransferMap;
	NSMutableDictionary* _accountIDToTransferGUIDsMap;
	NSMutableArray* _preauthorizedInfos;
	NSMutableArray* _preauthorizedGUIDs;
	NSMutableSet* _activeTransfers;
	NSMutableSet* _pendingTransfers;
	BOOL _disconnectionListenerSetUp;
	NSMutableDictionary* _fetchHighQualityVariantCompletionHandlers;
	BOOL _issueSandboxEstensionsForTransfers;

}

@property (nonatomic,readonly) NSDictionary * transfers; 
@property (nonatomic,readonly) NSArray * activeTransferGUIDs; 
@property (nonatomic,readonly) NSArray * orderedTransfersGUIDs; 
@property (nonatomic,readonly) BOOL hasActiveFileTransfers; 
@property (nonatomic,readonly) BOOL hasPendingFileTransfers; 
@property (assign,getter=shouldIssueSandboxEstensionsForTransfers,nonatomic) BOOL issueSandboxEstensionsForTransfers;              //@synthesize issueSandboxEstensionsForTransfers=_issueSandboxEstensionsForTransfers - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * activeTransfers; 
@property (nonatomic,__weak,readonly) NSArray * orderedTransfers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(Class)fileTransferClass;
+(Class)transferCenterClass;
+(void)setTransferCenterClass:(Class)arg1 ;
-(NSArray *)orderedTransfersGUIDs;
-(void)acceptTransfer:(id)arg1 ;
-(void)acceptFileTransferIfPreauthorzed:(id)arg1 ;
-(void)assignTransfer:(id)arg1 toHandle:(id)arg2 ;
-(void)_removeAllActiveTransfers;
-(BOOL)isFileTransfer:(id)arg1 preauthorizedWithDictionary:(id)arg2 ;
-(void)_daemonRestarted:(id)arg1 ;
-(void)_fetchHighQualityVariantForTransferGUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)guidsForStoredAttachmentPayloadData:(id)arg1 messageGUID:(id)arg2 ;
-(void)_addTransfer:(id)arg1 ;
-(void)clearFinishedTransfers;
-(void)_handleFileTransfers:(id)arg1 createdWithLocalPaths:(id)arg2 ;
-(NSArray *)orderedTransfers;
-(id)transferForGUID:(id)arg1 ;
-(void)sendTransfer:(id)arg1 ;
-(BOOL)wasFileTransferPreauthorized:(id)arg1 ;
-(id)transferForGUID:(id)arg1 includeRemoved:(BOOL)arg2 ;
-(id)transfersForAccount:(id)arg1 ;
-(BOOL)hasActiveFileTransfers;
-(void)_addActiveTransfer:(id)arg1 ;
-(void)acceptTransfer:(id)arg1 withPath:(id)arg2 autoRename:(BOOL)arg3 overwrite:(BOOL)arg4 ;
-(NSDictionary *)transfers;
-(void)deleteTransfer:(id)arg1 ;
-(BOOL)shouldIssueSandboxEstensionsForTransfers;
-(void)setAuxImageForTransfer:(id)arg1 value:(BOOL)arg2 ;
-(void)_handleFileTransferHighQualityDownloadFailed:(id)arg1 ;
-(void)assignTransfer:(id)arg1 toMessage:(id)arg2 account:(id)arg3 ;
-(BOOL)hasPendingFileTransfers;
-(void)registerTransferWithDaemon:(id)arg1 ;
-(BOOL)doesLocalURLRequireArchiving:(id)arg1 toHandle:(id)arg2 ;
-(void)acknowledgePendingTransfer:(id)arg1 ;
-(void)_initiateHighQualityVariantDownloadWithDaemonForGUID:(id)arg1 ;
-(void)preWarmConnection;
-(void)_addTransfer:(id)arg1 toAccount:(id)arg2 ;
-(void)_handleAllFileTransfers:(id)arg1 ;
-(void)preauthorizeFileTransferFromOtherPerson:(id)arg1 account:(id)arg2 filename:(id)arg3 saveToPath:(id)arg4 ;
-(id)chatForTransfer:(id)arg1 ;
-(void)fetchHighQualityVariantForTransfer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_clearTransfers;
-(id)guidForNewOutgoingTransferWithLocalURL:(id)arg1 useLegacyGuid:(BOOL)arg2 ;
-(void)_handleFileTransfer:(id)arg1 updatedWithProperties:(id)arg2 ;
-(NSArray *)activeTransfers;
-(void)_addSpotlightProperties:(id)arg1 sender:(id)arg2 recipients:(id)arg3 incoming:(BOOL)arg4 ;
-(void)_handleFileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4 ;
-(id)guidForNewOutgoingTransferWithLocalURL:(id)arg1 ;
-(void)_handleFileTransfer:(id)arg1 highQualityDownloadSucceededWithPath:(id)arg2 ;
-(void)retargetTransfer:(id)arg1 toPath:(id)arg2 ;
-(void)setIssueSandboxEstensionsForTransfers:(BOOL)arg1 ;
-(NSArray *)activeTransferGUIDs;
-(void)setAuxVideoForTransfer:(id)arg1 value:(BOOL)arg2 ;
-(void)_handleFileTransfer:(id)arg1 createdWithProperties:(id)arg2 ;
-(void)acknowledgeAllPendingTransfers;
-(void)removeTransfer:(id)arg1 ;
-(void)_removePendingTransfer:(id)arg1 ;
-(void)_addPendingTransfer:(id)arg1 ;
-(void)dealloc;
-(void)_removeActiveTransfer:(id)arg1 ;
-(BOOL)registerGUID:(id)arg1 forNewOutgoingTransferWithLocalURL:(id)arg2 ;
-(void)stopTransfer:(id)arg1 ;
@end

