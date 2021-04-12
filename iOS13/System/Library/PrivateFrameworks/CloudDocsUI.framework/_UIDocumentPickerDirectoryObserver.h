/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

@class NSOrderedSet, NSPredicate;


@protocol _UIDocumentPickerDirectoryObserver <NSObject>
@property (nonatomic,retain) NSOrderedSet * staticItems; 
@property (nonatomic,readonly) BOOL afterInitialUpdate; 
@property (nonatomic,retain) NSPredicate * queryPredicate; 
@required
-(void)setStaticItems:(id)arg1;
-(NSOrderedSet *)staticItems;
-(void)setQueryPredicate:(id)arg1;
-(BOOL)afterInitialUpdate;
-(NSPredicate *)queryPredicate;

@end

