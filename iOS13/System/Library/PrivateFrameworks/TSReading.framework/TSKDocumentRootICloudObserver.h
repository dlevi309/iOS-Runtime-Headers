/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSOperationQueue;

@interface TSKDocumentRootICloudObserver : NSObject {

	long long _identifier;
	NSOperationQueue* _operationQueue;
	/*^block*/id _block;
	long long _identifer;

}

@property (nonatomic,readonly) long long identifer;              //@synthesize identifer=_identifer - In the implementation block
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(long long)identifer;
-(void)invokeWithDocumentRoot:(id)arg1 ;
@end

