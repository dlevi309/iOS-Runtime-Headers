/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(IKEngine *)engine;
-(NSMutableArray *)identifiers;
-(id)folders;
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(void)dealloc;
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

