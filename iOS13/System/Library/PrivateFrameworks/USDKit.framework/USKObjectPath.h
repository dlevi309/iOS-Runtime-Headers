/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/


#import <USDKit/USDKit-Structs.h>
@interface USKObjectPath : NSObject {

	SdfPath _path;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)stringValue;
-(id)initWithString:(id)arg1 ;
-(SdfPath)path;
-(id)initWithToken:(id)arg1 ;
-(id)propertyName;
-(id)pathByAppendingPropertyComponent:(id)arg1 ;
-(id)tokenValue;
-(id)initWithSdfPath:(SdfPath)arg1 ;
-(BOOL)isNodePath;
-(id)nodePath;
-(BOOL)isPropertyPath;
@end

