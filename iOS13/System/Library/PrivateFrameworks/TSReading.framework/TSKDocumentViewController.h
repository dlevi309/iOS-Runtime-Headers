/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

@class NSArray;


@protocol TSKDocumentViewController
@property (nonatomic,retain,readonly) id documentRoot; 
@property (nonatomic,readonly) BOOL isCJKEnabled; 
@property (nonatomic,readonly) NSArray * CJKLanguages; 
@property (nonatomic,readonly) BOOL isBiDiEnabled; 
@property (nonatomic,readonly) NSArray * bidiLanguages; 
@property (nonatomic,readonly) NSArray * listLanguages; 
@required
-(id)documentRoot;
-(BOOL)inPrintPreviewMode;
-(BOOL)inFindReplaceMode;
-(NSArray *)CJKLanguages;
-(NSArray *)bidiLanguages;
-(BOOL)toolsControllerIsVisible;
-(BOOL)insertControllerIsVisible;
-(void)showInsertPopoverFromRect:(CGRect)arg1 popoverType:(int)arg2 withDoneButton:(BOOL)arg3;
-(BOOL)isInspectorVisible;
-(BOOL)isCJKEnabled;
-(BOOL)isBiDiEnabled;
-(NSArray *)listLanguages;

@end

