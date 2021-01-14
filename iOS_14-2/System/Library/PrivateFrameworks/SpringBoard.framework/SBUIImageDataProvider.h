/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/XBSnapshotDataProvider.h>

@class UIImage, SBSnapshotDataProviderContext, XBSnapshotDataProviderContext, NSString;

@interface SBUIImageDataProvider : NSObject <XBSnapshotDataProvider> {

	UIImage* _image;
	SBSnapshotDataProviderContext* _context;
	double _scaleFactor;

}

@property (nonatomic,retain,readonly) XBSnapshotDataProviderContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(XBSnapshotDataProviderContext *)context;
-(id)fetchImageForFormat:(long long)arg1 ;
-(id)initWithImage:(id)arg1 context:(id)arg2 scaleFactor:(double)arg3 ;
@end

