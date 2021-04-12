/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class JSContext, NSMutableArray, JSManagedValue;

@interface WFSyntaxHighlightingPluginManager : NSObject {

	JSContext* _context;
	NSMutableArray* _tokenLines;
	unsigned long long _minimumChangedLine;
	unsigned long long _maxChangedLine;
	JSManagedValue* _colorScheme;
	JSManagedValue* _highlightingPlugin;
	JSManagedValue* _syntaxPlugin;
	unsigned long long _syntaxHighlightingType;
	unsigned long long _syntaxHighlightingAppearance;

}

@property (assign,nonatomic) unsigned long long syntaxHighlightingType;                    //@synthesize syntaxHighlightingType=_syntaxHighlightingType - In the implementation block
@property (assign,nonatomic) unsigned long long syntaxHighlightingAppearance;              //@synthesize syntaxHighlightingAppearance=_syntaxHighlightingAppearance - In the implementation block
-(id)init;
-(void)dealloc;
-(id)defaultBackgroundColor;
-(unsigned long long)syntaxHighlightingType;
-(void)setSyntaxHighlightingType:(unsigned long long)arg1 ;
-(id)configurationFilesForAppearance:(unsigned long long)arg1 ;
-(void)setSyntaxHighlightingAppearance:(unsigned long long)arg1 ;
-(void)didAddLineAtIndex:(unsigned long long)arg1 ;
-(void)didRemoveLineAtIndex:(unsigned long long)arg1 ;
-(BOOL)didChangeLine:(unsigned long long)arg1 string:(id)arg2 ;
-(void)discardManagedReferencesForLineNumber:(unsigned long long)arg1 ;
-(void)highlightAllTokensWithCallback:(/*^block*/id)arg1 ;
-(void)loadPlugins;
-(void)reloadPlugins;
-(void)unloadPlugins;
-(id)loadPluginUsingConfigWithModuleName:(id)arg1 module:(id)arg2 ;
-(void)loadColorSchemePlugin;
-(void)loadHighlightingPlugin;
-(void)loadSyntaxPlugin;
-(id)defaultForegroundColor;
-(unsigned long long)syntaxHighlightingAppearance;
@end

