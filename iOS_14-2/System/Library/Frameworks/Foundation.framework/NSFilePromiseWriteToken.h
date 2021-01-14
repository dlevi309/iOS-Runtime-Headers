/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSURL;

@interface NSFilePromiseWriteToken : NSObject {

	NSURL* promiseURL;
	NSURL* logicalURL;

}

@property (copy) NSURL * promiseURL; 
@property (copy) NSURL * logicalURL; 
-(NSURL *)promiseURL;
-(void)setPromiseURL:(NSURL *)arg1 ;
-(void)setLogicalURL:(NSURL *)arg1 ;
-(NSURL *)logicalURL;
-(void)dealloc;
@end

