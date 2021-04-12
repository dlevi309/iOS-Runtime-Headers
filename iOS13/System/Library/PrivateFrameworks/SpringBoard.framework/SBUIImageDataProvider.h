/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/XBSnapshotDataProvider.h>

@class UIImage, SBSnapshotDataProviderContext, NSString, XBSnapshotDataProviderContext;

@interface SBUIImageDataProvider : NSObject <XBSnapshotDataProvider> {

	UIImage* _image;
	SBSnapshotDataProviderContext* _context;
	double _scaleFactor;
	BOOL _allowIOSurface;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context;              //@synthesize context=_context - In the implementation block
-(XBSnapshotDataProviderContext *)context;
-(id)fetchImage;
-(id)initWithImage:(id)arg1 context:(id)arg2 scaleFactor:(double)arg3 allowIOSurface:(BOOL)arg4 ;
@end

