/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/CKPropertyCoding.h>

@class CKObjCClass, NSSet, NSString;

@interface CKObject : NSObject <CKPropertyCoding>

@property (nonatomic,readonly) CKObjCClass * objcClass; 
@property (nonatomic,readonly) NSSet * propertyNamesNotToEncode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKObjCClass *)objcClass;
-(id)dictionaryPropertyEncoding;
-(NSString *)description;
-(id)initWithPropertyDictionary:(id)arg1 ;
-(NSSet *)propertyNamesNotToEncode;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

