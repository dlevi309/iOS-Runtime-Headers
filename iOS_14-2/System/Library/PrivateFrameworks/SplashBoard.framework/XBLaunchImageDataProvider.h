/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/XBSnapshotDataProvider.h>

@class XBSnapshotDataProviderContext, _FBSSnapshot, UIImage, NSString;

@interface XBLaunchImageDataProvider : NSObject <XBSnapshotDataProvider> {

	_FBSSnapshot* _snapshot;
	UIImage* _cachedImage;
	XBSnapshotDataProviderContext* _context;

}

@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(XBSnapshotDataProviderContext *)context;
-(void)invalidateImage;
-(id)fetchImage;
-(id)initWithRequest:(id)arg1 contextID:(unsigned)arg2 opaque:(BOOL)arg3 ;
@end

