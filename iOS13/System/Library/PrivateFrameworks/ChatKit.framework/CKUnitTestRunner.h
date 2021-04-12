/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/IMUnitTestRunnerDelegate.h>

@class IMUnitTestRunner, NSFileHandle, NSString;

@interface CKUnitTestRunner : NSObject <IMUnitTestRunnerDelegate> {

	BOOL _shouldWrite;
	IMUnitTestRunner* _runner;
	NSFileHandle* _fileHandle;

}

@property (nonatomic,retain) IMUnitTestRunner * runner;              //@synthesize runner=_runner - In the implementation block
@property (assign,nonatomic) BOOL shouldWrite;                       //@synthesize shouldWrite=_shouldWrite - In the implementation block
@property (nonatomic,retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(void)unitTestRunner:(id)arg1 didReceiveOutput:(id)arg2 ;
-(void)setShouldWrite:(BOOL)arg1 ;
-(void)setRunner:(IMUnitTestRunner *)arg1 ;
-(void)_dumpResults:(id)arg1 ;
-(BOOL)shouldWrite;
-(void)runUnitTestBundleAtPath:(id)arg1 writeToFile:(BOOL)arg2 ;
-(IMUnitTestRunner *)runner;
@end

