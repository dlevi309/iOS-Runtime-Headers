/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context;              //@synthesize context=_context - In the implementation block
-(XBSnapshotDataProviderContext *)context;
-(id)IOSurface;
-(BOOL)hasProtectedContent;
-(id)fetchImage;
-(id)fallbackSnapshotDataProvider;
-(id)initWithSceneSnapshot:(id)arg1 scaleFactor:(double)arg2 ;
-(void)_invalidateSnapshotData;
@end

