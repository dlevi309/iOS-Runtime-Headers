/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/


#import <USDKit/USDKit-Structs.h>
@interface USKResourcePath : NSObject {

	SdfAssetPath _path;

}
-(id)path;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)resolvedPath;
-(SdfAssetPath)sdfAssetPath;
-(id)initWithSdfAssetPath:(SdfAssetPath)arg1 ;
@end

