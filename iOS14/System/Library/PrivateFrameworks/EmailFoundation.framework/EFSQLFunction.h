/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLValueExpressable.h>

@class NSString, NSArray;

@interface EFSQLFunction : NSObject <EFSQLValueExpressable> {

	NSString* _name;
	NSArray* _arguments;

}

@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * arguments;                      //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hex:(id)arg1 ;
+(id)char:(id)arg1 ;
+(id)lower:(id)arg1 ;
+(id)upper:(id)arg1 ;
+(id)typeOf:(id)arg1 ;
+(id)likely:(id)arg1 ;
+(id)abs:(id)arg1 ;
+(id)coalesce:(id)arg1 ;
+(id)glob:(id)arg1 expression:(id)arg2 ;
+(id)ifNull:(id)arg1 second:(id)arg2 ;
+(id)inStr:(id)arg1 second:(id)arg2 ;
+(id)like:(id)arg1 expression:(id)arg2 ;
+(id)like:(id)arg1 expression:(id)arg2 escape:(unsigned short)arg3 ;
+(id)ltrim:(id)arg1 pattern:(id)arg2 ;
+(id)nullIf:(id)arg1 second:(id)arg2 ;
+(id)unlikely:(id)arg1 ;
+(id)replace:(id)arg1 pattern:(id)arg2 replacement:(id)arg3 ;
+(id)round:(id)arg1 digits:(id)arg2 ;
+(id)rtrim:(id)arg1 pattern:(id)arg2 ;
+(id)substr:(id)arg1 index:(id)arg2 length:(id)arg3 ;
+(id)trim:(id)arg1 pattern:(id)arg2 ;
+(id)min:(id)arg1 ;
+(id)max:(id)arg1 ;
+(id)length:(id)arg1 ;
-(id)ef_SQLIsolatedExpression;
-(id)initWithName:(id)arg1 arguments:(id)arg2 ;
-(NSString *)name;
-(NSArray *)arguments;
-(NSString *)ef_SQLExpression;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
@end

