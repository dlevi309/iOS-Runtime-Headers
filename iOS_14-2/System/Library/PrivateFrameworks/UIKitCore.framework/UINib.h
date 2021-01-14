/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface UINib : NSObject {

	id storage;

}
+(id)nibWithNibName:(id)arg1 bundle:(id)arg2 ;
+(id)nibWithData:(id)arg1 bundle:(id)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(id)initWithData:(id)arg1 bundle:(id)arg2 ;
-(void)setCaptureImplicitLoadingContextOnDecode:(BOOL)arg1 ;
-(void)setInstantiatingForSimulator:(BOOL)arg1 ;
-(void)setIdentifierForStringsFile:(id)arg1 ;
-(id)lazyArchiveData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)effectiveBundle;
-(id)instantiateWithOwner:(id)arg1 options:(id)arg2 ;
-(BOOL)instantiatingForSimulator;
-(BOOL)captureImplicitLoadingContextOnDecode;
-(id)unarchiverForInstantiatingReturningError:(id*)arg1 ;
-(id)initWithNibName:(id)arg1 directory:(id)arg2 bundle:(id)arg3 ;
-(id)bundleResourcePath;
-(id)initWithCoder:(id)arg1 ;
-(void)setCaptureEnclosingNIBBundleOnDecode:(BOOL)arg1 ;
-(BOOL)captureEnclosingNIBBundleOnDecode;
-(void)_registerForMemoryWarningIfNeeded;
-(id)identifierForStringsFile;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(id)nibDataForPath:(id)arg1 ;
-(void)dealloc;
@end

