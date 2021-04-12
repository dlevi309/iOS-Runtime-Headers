/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSThread, NSError, NSString;

@interface CPLEngineStoreTransaction : NSObject {

	NSThread* _currentThread;
	BOOL _forWrite;
	NSError* _error;
	NSString* _name;

}

@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)description;
-(NSString *)name;
-(id)redactedDescription;
-(void)setName:(NSString *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)canWrite;
-(BOOL)canRead;
-(void)_transactionDidFinish;
-(void)_transactionWillBeginOnThread:(id)arg1 ;
-(BOOL)do:(/*^block*/id)arg1 ;
-(id)initForWrite:(BOOL)arg1 ;
-(BOOL)_forWrite;
@end

