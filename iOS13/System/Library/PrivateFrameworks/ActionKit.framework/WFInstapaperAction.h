/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/WFDynamicEnumerationDataSource.h>
#import <libobjc.A.dylib/IKEngineDelegate.h>

@class IKEngine, NSMutableArray, NSArray, NSString;

@interface WFInstapaperAction : WFAction <WFDynamicEnumerationDataSource, IKEngineDelegate> {

	BOOL _hasFetchedFolders;
	IKEngine* _engine;
	NSMutableArray* _identifiers;

}

@property (assign,nonatomic) BOOL hasFetchedFolders;                      //@synthesize hasFetchedFolders=_hasFetchedFolders - In the implementation block
@property (nonatomic,readonly) IKEngine * engine;                         //@synthesize engine=_engine - In the implementation block
@property (nonatomic,readonly) NSArray * connectionTypes; 
@property (nonatomic,readonly) BOOL includeSpecialFolders; 
@property (nonatomic,readonly) NSMutableArray * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(IKEngine *)engine;
-(NSMutableArray *)identifiers;
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(id)folders;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(id)possibleStatesForEnumeration:(id)arg1 ;
-(id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg1 selectedFolder:(id)arg2 ;
-(NSArray *)connectionTypes;
-(void)engine:(id)arg1 willStartConnection:(id)arg2 ;
-(void)engine:(id)arg1 didFinishConnection:(id)arg2 ;
-(void)engine:(id)arg1 didFailConnection:(id)arg2 error:(id)arg3 ;
-(void)engine:(id)arg1 connection:(id)arg2 didReceiveFolders:(id)arg3 ;
-(void)updateFolders;
-(BOOL)includeSpecialFolders;
-(BOOL)hasFetchedFolders;
-(void)setHasFetchedFolders:(BOOL)arg1 ;
@end

