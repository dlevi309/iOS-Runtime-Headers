/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKApplicationInfoServiceInterface.h>

@class CRKValidXPCConnectionProvider;

@interface CRKApplicationInfoServiceProxy : NSObject <CRKApplicationInfoServiceInterface> {

	CRKValidXPCConnectionProvider* _connectionProvider;

}

@property (nonatomic,readonly) CRKValidXPCConnectionProvider * connectionProvider;              //@synthesize connectionProvider=_connectionProvider - In the implementation block
-(id)init;
-(CRKValidXPCConnectionProvider *)connectionProvider;
-(void)fetchApplicationWithDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchApplicationWithDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

