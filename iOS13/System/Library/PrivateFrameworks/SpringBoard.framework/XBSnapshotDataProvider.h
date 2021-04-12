/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class XBSnapshotDataProviderContext;


@protocol XBSnapshotDataProvider <NSObject>
@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context; 
@optional
-(BOOL)hasProtectedContent;
-(void)invalidateImage;
-(id)fetchImageData:(out CGAffineTransform*)arg1;
-(id)fetchImage;
-(id)fallbackSnapshotDataProvider;

@required
-(XBSnapshotDataProviderContext *)context;

@end

