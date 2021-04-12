/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@class FPActionOperationLocator, NSString;

@interface FPDMoveAtom : NSObject {

	unsigned char _kind;
	BOOL _useAtomicMove;
	BOOL _useDiskWriter;
	FPActionOperationLocator* _root;
	FPActionOperationLocator* _source;
	NSString* _targetName;
	FPActionOperationLocator* _targetFolder;
	unsigned long long _materializeOption;
	unsigned long long _targetMaterializeOption;

}

@property (nonatomic,readonly) unsigned char kind;                                      //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) FPActionOperationLocator * root;                         //@synthesize root=_root - In the implementation block
@property (nonatomic,readonly) FPActionOperationLocator * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * targetName;                                   //@synthesize targetName=_targetName - In the implementation block
@property (nonatomic,readonly) FPActionOperationLocator * targetFolder;                 //@synthesize targetFolder=_targetFolder - In the implementation block
@property (nonatomic,readonly) BOOL useAtomicMove;                                      //@synthesize useAtomicMove=_useAtomicMove - In the implementation block
@property (nonatomic,readonly) BOOL useDiskWriter;                                      //@synthesize useDiskWriter=_useDiskWriter - In the implementation block
@property (nonatomic,readonly) unsigned long long materializeOption;                    //@synthesize materializeOption=_materializeOption - In the implementation block
@property (nonatomic,readonly) unsigned long long targetMaterializeOption;              //@synthesize targetMaterializeOption=_targetMaterializeOption - In the implementation block
+(id)atomForMoving:(id)arg1 toTargetFolder:(id)arg2 as:(id)arg3 root:(id)arg4 atomically:(BOOL)arg5 sourceMaterializeOption:(unsigned long long)arg6 targetMaterializeOption:(unsigned long long)arg7 useDiskWriter:(BOOL)arg8 ;
+(id)atomForPostFolderUnderRoot:(id)arg1 atomically:(BOOL)arg2 useDiskWriter:(BOOL)arg3 ;
-(id)description;
-(FPActionOperationLocator *)source;
-(unsigned char)kind;
-(FPActionOperationLocator *)root;
-(NSString *)targetName;
-(FPActionOperationLocator *)targetFolder;
-(BOOL)shouldAccountForDownloadOfSourceItemForMoveInfo:(id)arg1 extensionManager:(id)arg2 ;
-(id)initWithKind:(unsigned char)arg1 source:(id)arg2 targetName:(id)arg3 targetFolder:(id)arg4 root:(id)arg5 atomically:(BOOL)arg6 sourceMaterializeOption:(unsigned long long)arg7 targetMaterializeOption:(unsigned long long)arg8 useDiskWriter:(BOOL)arg9 ;
-(BOOL)useAtomicMove;
-(BOOL)useDiskWriter;
-(unsigned long long)materializeOption;
-(unsigned long long)targetMaterializeOption;
@end

