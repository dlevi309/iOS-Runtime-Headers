/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKInternetDateFetching.h>

@class CRKValidXPCConnectionProvider, NSString;

@interface CRKInternetDateServiceProxy : NSObject <CRKInternetDateFetching> {

	CRKValidXPCConnectionProvider* _connectionProvider;

}

@property (nonatomic,readonly) CRKValidXPCConnectionProvider * connectionProvider;              //@synthesize connectionProvider=_connectionProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CRKValidXPCConnectionProvider *)connectionProvider;
-(void)fetchInternetDateWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchInternetDateWithCompletion:(/*^block*/id)arg1 ;
@end

