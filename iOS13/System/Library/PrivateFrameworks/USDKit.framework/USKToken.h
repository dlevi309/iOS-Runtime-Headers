/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(TfToken*)token;
-(id)stringValue;
-(id)initWithString:(id)arg1 ;
-(id)initWithTfToken:(TfToken*)arg1 ;
@end

