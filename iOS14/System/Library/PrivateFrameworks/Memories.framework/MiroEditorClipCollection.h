/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

@class NSIndexPath;


@protocol MiroEditorClipCollection <NSObject>
@property (assign,nonatomic,__weak) id<MiroEditorClipCollectionDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<MiroEditorClipCollectionDelegate> delegate; 
@property (nonatomic,retain) NSIndexPath * initialIndexPath; 
@required
-(id<MiroEditorClipCollectionDelegate>)delegate;
-(id<MiroEditorClipCollectionDataSource>)dataSource;
-(void)setDelegate:(id)arg1;
-(void)setDataSource:(id)arg1;
-(NSIndexPath *)initialIndexPath;
-(void)setInitialIndexPath:(id)arg1;
-(void)snapToIndexPath:(id)arg1 animated:(BOOL)arg2;
-(id)cellForClipProvider:(id)arg1;

@end

