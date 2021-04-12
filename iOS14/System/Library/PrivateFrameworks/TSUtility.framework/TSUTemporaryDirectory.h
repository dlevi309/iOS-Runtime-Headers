/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@class NSString;

@interface TSUTemporaryDirectory : NSObject {

	NSString* _path;
	BOOL _leak;

}
-(id)init;
-(id)path;
-(id)URL;
-(void)dealloc;
-(void)leakTemporaryDirectory;
-(id)initWithSignature:(id)arg1 ;
-(id)initWithSignature:(id)arg1 subdirectory:(id)arg2 ;
-(void)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2 ;
@end

