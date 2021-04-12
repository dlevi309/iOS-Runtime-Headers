/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKScreenshotServiceInterface.h>

@class CRKValidXPCConnectionProvider;

@interface CRKScreenshotServiceProxy : NSObject <CRKScreenshotServiceInterface> {

	CRKValidXPCConnectionProvider* _connectionProvider;

}

@property (nonatomic,readonly) CRKValidXPCConnectionProvider * connectionProvider;              //@synthesize connectionProvider=_connectionProvider - In the implementation block
-(id)init;
-(CRKValidXPCConnectionProvider *)connectionProvider;
-(void)_fetchScreenshotDataWithMaximumSizeInPixels:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchScreenshotDataWithMaximumSizeInPixels:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
@end

