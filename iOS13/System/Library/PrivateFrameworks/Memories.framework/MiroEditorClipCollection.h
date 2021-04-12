/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

@class NSIndexPath;


@protocol MiroEditorClipCollection <NSObject>
@property (assign,nonatomic,__weak) id<MiroEditorClipCollectionDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<MiroEditorClipCollectionDelegate> delegate; 
@property (nonatomic,retain) NSIndexPath * initialIndexPath; 
@required
-(id<MiroEditorClipCollectionDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id<MiroEditorClipCollectionDataSource>)dataSource;
-(void)setDataSource:(id)arg1;
-(NSIndexPath *)initialIndexPath;
-(void)setInitialIndexPath:(id)arg1;
-(void)snapToIndexPath:(id)arg1 animated:(BOOL)arg2;
-(id)cellForClipProvider:(id)arg1;

@end

