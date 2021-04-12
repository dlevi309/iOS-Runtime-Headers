/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/XBSnapshotDataProvider.h>

@class XBSnapshotDataProviderContext, FBSceneSnapshot, SBSnapshotDataProviderContext, UIImage, SBFallbackSnapshotDataProvider, IOSurface, NSString;

@interface SBSceneSnapshotDataProvider : NSObject <XBSnapshotDataProvider> {

	FBSceneSnapshot* _snapshot;
	SBSnapshotDataProviderContext* _context;
	double _scaleFactor;
	UIImage* _cachedImage;
	SBFallbackSnapshotDataProvider* _fallbackSnapshotDataProvider;
	IOSurface* _processedSurface;
	BOOL _hasProtectedContent;

}

@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasProtectedContent;
-(id)IOSurfaceForFormat:(long long)arg1 ;
-(XBSnapshotDataProviderContext *)context;
-(id)fetchImageForFormat:(long long)arg1 ;
-(void)_invalidateSnapshotData;
-(id)initWithSceneSnapshot:(id)arg1 scaleFactor:(double)arg2 ;
-(id)fallbackSnapshotDataProvider;
@end

