/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/


@class DAFolder, NSArray;

@interface DAFolderSyncRequest : NSObject {

	BOOL _hasRemoteChanges;
	BOOL _isInitialUberSync;
	BOOL _isResyncAfterConnectionFailed;
	BOOL _isResyncAfterServerError;
	BOOL _containsPostponedActions;
	DAFolder* _folder;
	NSArray* _actions;

}

@property (nonatomic,retain) DAFolder * folder;                               //@synthesize folder=_folder - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteChanges;                           //@synthesize hasRemoteChanges=_hasRemoteChanges - In the implementation block
@property (assign,nonatomic) BOOL isInitialUberSync;                          //@synthesize isInitialUberSync=_isInitialUberSync - In the implementation block
@property (nonatomic,retain) NSArray * actions;                               //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL isResyncAfterConnectionFailed;              //@synthesize isResyncAfterConnectionFailed=_isResyncAfterConnectionFailed - In the implementation block
@property (assign,nonatomic) BOOL isResyncAfterServerError;                   //@synthesize isResyncAfterServerError=_isResyncAfterServerError - In the implementation block
@property (assign,nonatomic) BOOL containsPostponedActions;                   //@synthesize containsPostponedActions=_containsPostponedActions - In the implementation block
-(id)description;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(DAFolder *)folder;
-(void)setFolder:(DAFolder *)arg1 ;
-(BOOL)hasRemoteChanges;
-(void)setHasRemoteChanges:(BOOL)arg1 ;
-(void)setIsInitialUberSync:(BOOL)arg1 ;
-(void)setIsResyncAfterConnectionFailed:(BOOL)arg1 ;
-(void)setIsResyncAfterServerError:(BOOL)arg1 ;
-(BOOL)isInitialUberSync;
-(BOOL)isResyncAfterConnectionFailed;
-(id)initWithFolder:(id)arg1 hasRemoteChanges:(BOOL)arg2 isInitialUberSync:(BOOL)arg3 ;
-(BOOL)isResyncAfterServerError;
-(BOOL)containsPostponedActions;
-(void)setContainsPostponedActions:(BOOL)arg1 ;
@end

