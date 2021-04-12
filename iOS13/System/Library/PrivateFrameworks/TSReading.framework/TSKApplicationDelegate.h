/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKApplicationDelegate.h>

@protocol TSKApplicationDelegate
@optional
-(BOOL)openURL:(id)arg1 sourceDocumentRoot:(id)arg2;
-(long long)maximumFontSize;

@end


@protocol TSKCompatibilityDelegate;
@class NSString;

@interface TSKApplicationDelegate : NSObject <TSKApplicationDelegate> {

	id<TSKCompatibilityDelegate> _compatibilityDelegate;

}

@property (nonatomic,readonly) BOOL tableHeaderInspectorShowsFreezeHeaderRowsSwitch; 
@property (nonatomic,readonly) BOOL tableHeaderInspectorShowsFreezeHeaderColumnsSwitch; 
@property (nonatomic,readonly) BOOL tableHeaderInspectorShowsRepeatHeaderRowsSwitch; 
@property (nonatomic,readonly) BOOL tableCellInspectorShowsNaturalAlignment; 
@property (nonatomic,readonly) BOOL textInspectorShowsMoreSubpane; 
@property (nonatomic,retain) id<TSKCompatibilityDelegate> compatibilityDelegate;                     //@synthesize compatibilityDelegate=_compatibilityDelegate - In the implementation block
@property (nonatomic,readonly) NSString * applicationName; 
@property (nonatomic,readonly) NSString * documentTypeDisplayName; 
@property (nonatomic,readonly) NSString * templateTypeDisplayName; 
@property (getter=isActivating,readonly) BOOL activating; 
@property (getter=isInBackground,readonly) BOOL inBackground; 
@property (nonatomic,readonly) BOOL designModeEnabled; 
@property (nonatomic,readonly) BOOL performanceModeEnabled; 
@property (nonatomic,readonly) BOOL centerOnInitialSelection; 
@property (nonatomic,readonly) BOOL isCanvasFullScreen; 
+(BOOL)isUnitTesting;
+(id)sharedDelegate;
+(void)setSurrogateDelegate:(id)arg1 ;
+(id)documentDirectoryPath;
-(id)init;
-(void)dealloc;
-(BOOL)openURL:(id)arg1 ;
-(BOOL)isInBackground;
-(NSString *)applicationName;
-(BOOL)isActivating;
-(id)createCompatibilityDelegate;
-(void)setCompatibilityDelegate:(id<TSKCompatibilityDelegate>)arg1 ;
-(BOOL)openURL:(id)arg1 sourceDocumentRoot:(id)arg2 ;
-(NSString *)documentTypeDisplayName;
-(NSString *)templateTypeDisplayName;
-(BOOL)centerOnInitialSelection;
-(BOOL)isCanvasFullScreen;
-(CGRect)applicationToolbarFrame;
-(BOOL)shouldRenderContactShadow;
-(BOOL)shouldRenderCurvedShadow;
-(BOOL)supportsRTL;
-(BOOL)supportsScrollingInPhoneCommentUI;
-(BOOL)shouldValidateMasterLayoutWhileInsertingRows;
-(id)previewImageForType:(id)arg1 ;
-(id)appChartPropertyOverrides;
-(id)invalidURLSchemes;
-(id)validURLSchemes;
-(id)defaultHyperlinkURL;
-(BOOL)designModeEnabled;
-(BOOL)performanceModeEnabled;
-(BOOL)shouldGenerateGuidesForOffscreenLayouts;
-(id)toolbarButtonForModalDoneWithTarget:(id)arg1 action:(SEL)arg2 ;
-(id<TSKCompatibilityDelegate>)compatibilityDelegate;
-(BOOL)tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
-(BOOL)tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
-(BOOL)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
-(BOOL)tableCellInspectorShowsNaturalAlignment;
-(BOOL)textInspectorShowsMoreSubpane;
@end

