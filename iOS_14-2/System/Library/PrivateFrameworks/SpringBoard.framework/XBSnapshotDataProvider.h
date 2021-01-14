/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class XBSnapshotDataProviderContext;


@protocol XBSnapshotDataProvider <NSObject>
@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context; 
@optional
-(BOOL)hasProtectedContent;
-(id)fetchImageForFormat:(long long)arg1;
-(void)invalidateImage;
-(id)fallbackSnapshotDataProvider;
-(id)fetchImage;
-(id)fetchImageData:(out CGAffineTransform*)arg1;

@required
-(XBSnapshotDataProviderContext *)context;

@end

