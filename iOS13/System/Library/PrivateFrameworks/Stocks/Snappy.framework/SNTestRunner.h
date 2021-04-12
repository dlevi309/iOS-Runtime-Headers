/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks/Snappy.framework/Snappy
*/

#import <libobjc.A.dylib/SNTestRunner.h>

@protocol SNTestRunner <NSObject>
@required
-(BOOL)runTest:(id)arg1 options:(id)arg2;

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
-(UIApplication *)application;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(SNTestStore *)testStore;
-(id<SNTestCoordinating>)testCoordinator;
-(id)initWithApplication:(id)arg1 testCoordinator:(id)arg2 testStore:(id)arg3 ;
@end

