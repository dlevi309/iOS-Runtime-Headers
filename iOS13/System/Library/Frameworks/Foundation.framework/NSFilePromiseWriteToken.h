/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSURL;

@interface NSFilePromiseWriteToken : NSObject {

	NSURL* promiseURL;
	NSURL* logicalURL;

}

@property (copy) NSURL * promiseURL; 
@property (copy) NSURL * logicalURL; 
-(void)dealloc;
-(NSURL *)logicalURL;
-(void)setPromiseURL:(NSURL *)arg1 ;
-(void)setLogicalURL:(NSURL *)arg1 ;
-(NSURL *)promiseURL;
@end

