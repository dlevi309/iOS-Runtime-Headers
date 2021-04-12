/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSPredicate *)queryPredicate;
-(BOOL)afterInitialUpdate;

@end

