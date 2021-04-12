/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/


@class NSString;

@interface BUTemporaryDirectory : NSObject {

	NSString* _path;
	BOOL _leak;

}
-(id)init;
-(void)dealloc;
-(id)path;
-(id)URL;
-(id)initWithError:(id*)arg1 ;
-(void)leakTemporaryDirectory;
-(id)initWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id*)arg3 ;
-(BOOL)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id*)arg3 ;
-(id)initWithSignature:(id)arg1 error:(id*)arg2 ;
-(id)initForWritingToURL:(id)arg1 error:(id*)arg2 ;
@end

