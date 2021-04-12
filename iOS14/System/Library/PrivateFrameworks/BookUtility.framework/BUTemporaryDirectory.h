/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/


@class NSString;

@interface BUTemporaryDirectory : NSObject {

	NSString* _path;
	BOOL _leak;

}
-(id)initWithError:(id*)arg1 ;
-(id)init;
-(id)path;
-(id)URL;
-(void)dealloc;
-(id)initWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id*)arg3 ;
-(BOOL)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2 error:(id*)arg3 ;
-(id)initWithSignature:(id)arg1 error:(id*)arg2 ;
-(id)initForWritingToURL:(id)arg1 error:(id*)arg2 ;
-(void)leakTemporaryDirectory;
@end

