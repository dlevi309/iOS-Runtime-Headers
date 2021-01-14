/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/


#import <USDKit/USDKit-Structs.h>
@interface USKObjectPath : NSObject {

	SdfPath _path;

}
-(id)initWithString:(id)arg1 ;
-(id)init;
-(SdfPath)path;
-(id)stringValue;
-(unsigned long long)hash;
-(id)initWithToken:(id)arg1 ;
-(id)propertyName;
-(BOOL)isEqual:(id)arg1 ;
-(id)tokenValue;
-(id)pathByAppendingPropertyComponent:(id)arg1 ;
-(id)initWithSdfPath:(SdfPath)arg1 ;
-(BOOL)isNodePath;
-(id)nodePath;
-(BOOL)isPropertyPath;
@end

