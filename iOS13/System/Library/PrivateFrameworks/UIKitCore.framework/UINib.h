/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface UINib : NSObject {

	id storage;

}
+(id)nibWithNibName:(id)arg1 bundle:(id)arg2 ;
+(id)nibWithData:(id)arg1 bundle:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(id)instantiateWithOwner:(id)arg1 options:(id)arg2 ;
-(id)initWithNibName:(id)arg1 directory:(id)arg2 bundle:(id)arg3 ;
-(id)identifierForStringsFile;
-(void)setIdentifierForStringsFile:(id)arg1 ;
-(BOOL)instantiatingForSimulator;
-(void)setInstantiatingForSimulator:(BOOL)arg1 ;
-(BOOL)captureImplicitLoadingContextOnDecode;
-(void)setCaptureImplicitLoadingContextOnDecode:(BOOL)arg1 ;
-(void)_registerForMemoryWarningIfNeeded;
-(id)nibDataForPath:(id)arg1 ;
-(id)initWithData:(id)arg1 bundle:(id)arg2 ;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(id)effectiveBundle;
-(id)bundleResourcePath;
-(id)lazyArchiveData;
-(id)unarchiverForInstantiatingReturningError:(id*)arg1 ;
-(BOOL)captureEnclosingNIBBundleOnDecode;
-(void)setCaptureEnclosingNIBBundleOnDecode:(BOOL)arg1 ;
@end

