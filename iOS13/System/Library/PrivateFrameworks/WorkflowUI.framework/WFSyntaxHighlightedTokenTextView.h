/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFTextTokenTextView.h>
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
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(WFSyntaxHighlightingPluginManager *)pluginManager;
-(void)setVariableString:(id)arg1 ;
-(void)textUpdated;
-(unsigned long long)currentSyntaxHighlightingAppearance;
-(void)updateHighlighting;
-(void)synchronizeTokenManagerWithTextStorage:(id)arg1 ;
-(void)updateLineIndicesForTextStorage:(id)arg1 ;
-(NSRange)lineRangeForCharacterRange:(NSRange)arg1 ;
-(void)setPluginManager:(WFSyntaxHighlightingPluginManager *)arg1 ;
@end

