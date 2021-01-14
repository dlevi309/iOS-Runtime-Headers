/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


#import <MediaServices/MediaServices-Structs.h>
@interface MSVSQLStatement : NSObject {

	sqlite3_stmtRef _statementHandle;

}
-(void)bindNullValueToParameterAtIndex:(long long)arg1 ;
-(void)bindInt64Value:(long long)arg1 toParameterAtIndex:(long long)arg2 ;
-(void)bindDoubleValue:(double)arg1 toParameterAtIndex:(long long)arg2 ;
-(void)bindStringValue:(id)arg1 toParameterAtIndex:(long long)arg2 ;
-(void)bindDataValue:(id)arg1 toParameterAtIndex:(long long)arg2 ;
-(void)bindNullValueToParameterNamed:(id)arg1 ;
-(void)bindBoolValue:(BOOL)arg1 toParameterAtIndex:(long long)arg2 ;
-(void)bindDoubleValue:(double)arg1 toParameterNamed:(id)arg2 ;
-(void)bindDateValue:(id)arg1 toParameterAtIndex:(long long)arg2 ;
-(void)bindJSONValue:(id)arg1 toParameterAtIndex:(long long)arg2 error:(id*)arg3 ;
-(void)bindBoolValue:(BOOL)arg1 toParameterNamed:(id)arg2 ;
-(void)bindUInt64Value:(unsigned long long)arg1 toParameterAtIndex:(long long)arg2 ;
-(void)bindUInt64Value:(unsigned long long)arg1 toParameterNamed:(id)arg2 ;
-(void)bindFloatValue:(float)arg1 toParameterAtIndex:(long long)arg2 ;
-(void)bindFloatValue:(float)arg1 toParameterNamed:(id)arg2 ;
-(void)bindDateValue:(id)arg1 toParameterNamed:(id)arg2 ;
-(id)description;
-(void)reset;
-(void)invalidate;
-(void)bindStringValue:(id)arg1 toParameterNamed:(id)arg2 ;
-(void)bindInt64Value:(long long)arg1 toParameterNamed:(id)arg2 ;
-(void)bindDataValue:(id)arg1 toParameterNamed:(id)arg2 ;
-(void)bindJSONValue:(id)arg1 toParameterNamed:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
@end

