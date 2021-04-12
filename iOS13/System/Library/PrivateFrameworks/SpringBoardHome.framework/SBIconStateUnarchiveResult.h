/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/SBIconStateUnarchiveContext.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBRootFolder, NSMutableArray, NSMutableSet, NSDictionary, NSString;

@interface SBIconStateUnarchiveResult : NSObject <SBIconStateUnarchiveContext, BSDescriptionProviding> {

	SBRootFolder* _rootFolder;
	NSMutableArray* _folderStack;
	long long _parseDepth;
	NSMutableSet* _nodeIdentifiersUnarchived;
	BOOL _corrupted;
	BOOL _dirty;
	NSDictionary* _metadata;

}

@property (setter=_setRootFolder:,nonatomic,retain) SBRootFolder * rootFolder;              //@synthesize rootFolder=_rootFolder - In the implementation block
@property (setter=_setMetadata:,nonatomic,copy) NSDictionary * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(BOOL)isValid;
-(NSDictionary *)metadata;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isDirty;
-(void)_setMetadata:(id)arg1 ;
-(SBRootFolder *)rootFolder;
-(void)_noteEnteredNode;
-(void)_noteExitedNode;
-(void)_pushFolder:(id)arg1 ;
-(id)_currentFolder;
-(id)_popFolder;
-(long long)_currentParseDepth;
-(void)_noteRepresentationIsCorrupted;
-(void)_noteSignificantDeviation;
-(BOOL)_isNodeIdentifierAlreadyUnarchived:(id)arg1 ;
-(void)_noteNodeIdentifierWasUnarchived:(id)arg1 ;
-(void)_setRootFolder:(id)arg1 ;
@end

