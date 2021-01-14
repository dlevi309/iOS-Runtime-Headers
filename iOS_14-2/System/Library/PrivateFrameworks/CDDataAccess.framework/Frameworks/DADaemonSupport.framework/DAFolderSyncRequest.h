/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
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
-(void)setActions:(NSArray *)arg1 ;
-(NSArray *)actions;
-(DAFolder *)folder;
-(id)description;
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

