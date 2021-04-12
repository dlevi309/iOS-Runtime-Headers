/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLookThumbnailing/QLAsynchronousOperation.h>

@protocol QLListCellDataGenerationOperationDelegate;
@class QLListCell, QLItem;

@interface QLListCellDataGenerationOperation : QLAsynchronousOperation {

	BOOL _didGenerateThumbnail;
	BOOL _didGenerateSubtitleInformation;
	unsigned long long _index;
	QLListCell* _cell;
	QLItem* _item;
	id<QLListCellDataGenerationOperationDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long index;                                                   //@synthesize index=_index - In the implementation block
@property (assign,nonatomic,__weak) QLListCell * cell;                                                   //@synthesize cell=_cell - In the implementation block
@property (assign,nonatomic,__weak) QLItem * item;                                                       //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<QLListCellDataGenerationOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(QLListCell *)cell;
-(unsigned long long)index;
-(void)setCell:(QLListCell *)arg1 ;
-(id<QLListCellDataGenerationOperationDelegate>)delegate;
-(void)setIndex:(unsigned long long)arg1 ;
-(QLItem *)item;
-(void)_didGenerateThumbnail:(id)arg1 ;
-(void)_didDetermineFileSize:(id)arg1 fileTypeString:(id)arg2 ;
-(void)_finishIfNeeded;
-(id)initWithListCell:(id)arg1 index:(unsigned long long)arg2 item:(id)arg3 delegate:(id)arg4 ;
-(void)setItem:(QLItem *)arg1 ;
-(void)setDelegate:(id<QLListCellDataGenerationOperationDelegate>)arg1 ;
-(void)main;
@end

