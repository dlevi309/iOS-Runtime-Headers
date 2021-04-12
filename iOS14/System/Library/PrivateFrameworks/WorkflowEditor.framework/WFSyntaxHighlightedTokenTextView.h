/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/WFTextTokenTextView.h>
#import <libobjc.A.dylib/NSTextStorageDelegate.h>

@class NSMutableArray, WFSyntaxHighlightingPluginManager, NSString;

@interface WFSyntaxHighlightedTokenTextView : WFTextTokenTextView <NSTextStorageDelegate> {

	NSMutableArray* _lineIndices;
	WFSyntaxHighlightingPluginManager* _pluginManager;

}

@property (nonatomic,retain) WFSyntaxHighlightingPluginManager * pluginManager;              //@synthesize pluginManager=_pluginManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFSyntaxHighlightingPluginManager *)pluginManager;
-(void)setAttributedText:(id)arg1 ;
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setVariableString:(id)arg1 ;
-(void)textUpdated;
-(unsigned long long)currentSyntaxHighlightingAppearance;
-(void)updateHighlighting;
-(void)synchronizeTokenManagerWithTextStorage:(id)arg1 ;
-(void)updateLineIndicesForTextStorage:(id)arg1 ;
-(NSRange)lineRangeForCharacterRange:(NSRange)arg1 ;
-(void)setPluginManager:(WFSyntaxHighlightingPluginManager *)arg1 ;
@end

