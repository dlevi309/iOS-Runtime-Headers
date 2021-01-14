/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks/Snappy.framework/Snappy
*/

#import <libobjc.A.dylib/SNTestRunner.h>

@protocol SNTestRunner <NSObject>
@required
-(BOOL)runTest:(id)arg1 options:(id)arg2;
-(BOOL)runTest:(id)arg1 options:(id)arg2 fallingBackWith:(/*^block*/id)arg3;

@end


@protocol SNTestCoordinating;
@class UIApplication, SNTestStore, NSString;

@interface SNTestRunner : NSObject <SNTestRunner> {

	UIApplication* _application;
	id<SNTestCoordinating> _testCoordinator;
	SNTestStore* _testStore;

}

@property (nonatomic,readonly) UIApplication * application;                         //@synthesize application=_application - In the implementation block
@property (nonatomic,readonly) id<SNTestCoordinating> testCoordinator;              //@synthesize testCoordinator=_testCoordinator - In the implementation block
@property (nonatomic,readonly) SNTestStore * testStore;                             //@synthesize testStore=_testStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(UIApplication *)application;
-(BOOL)runTest:(id)arg1 options:(id)arg2 fallingBackWith:(/*^block*/id)arg3 ;
-(SNTestStore *)testStore;
-(id<SNTestCoordinating>)testCoordinator;
-(id)initWithApplication:(id)arg1 testCoordinator:(id)arg2 testStore:(id)arg3 ;
@end

