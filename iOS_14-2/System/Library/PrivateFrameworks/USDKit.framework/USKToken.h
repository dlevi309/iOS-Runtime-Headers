/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/


#import <USDKit/USDKit-Structs.h>
@interface USKToken : NSObject {

	TfToken* _token;

}
+(id)dataTypeWithTfToken:(TfToken*)arg1 ;
+(id)nodeTypeWithTfToken:(TfToken*)arg1 ;
+(id)schemaTypeWithTfToken:(TfToken*)arg1 ;
+(id)roleTypeWithTfToken:(TfToken*)arg1 ;
+(id)tokenWithNodeType:(id)arg1 ;
+(id)tokenWithRoleType:(id)arg1 ;
+(id)tokenWithDataType:(id)arg1 ;
+(id)tokenWithSchemaType:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)init;
-(id)stringValue;
-(unsigned long long)hash;
-(TfToken*)token;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTfToken:(TfToken*)arg1 ;
@end

