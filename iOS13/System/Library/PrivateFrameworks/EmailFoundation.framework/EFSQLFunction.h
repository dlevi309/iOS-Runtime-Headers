/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLExpressable.h>

@class NSString, NSArray;

@interface EFSQLFunction : NSObject <EFSQLExpressable> {

	NSString* _name;
	NSArray* _arguments;

}

@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * arguments;                      //@synthesize arguments=_arguments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
+(id)min:(id)arg1 ;
+(id)max:(id)arg1 ;
+(id)abs:(id)arg1 ;
+(id)length:(id)arg1 ;
+(id)coalesce:(id)arg1 ;
+(id)char:(id)arg1 ;
+(id)glob:(id)arg1 expression:(id)arg2 ;
+(id)hex:(id)arg1 ;
+(id)ifNull:(id)arg1 second:(id)arg2 ;
+(id)inStr:(id)arg1 second:(id)arg2 ;
+(id)like:(id)arg1 expression:(id)arg2 ;
+(id)like:(id)arg1 expression:(id)arg2 escape:(unsigned short)arg3 ;
+(id)lower:(id)arg1 ;
+(id)ltrim:(id)arg1 pattern:(id)arg2 ;
+(id)nullIf:(id)arg1 second:(id)arg2 ;
+(id)replace:(id)arg1 pattern:(id)arg2 replacement:(id)arg3 ;
+(id)round:(id)arg1 digits:(id)arg2 ;
+(id)rtrim:(id)arg1 pattern:(id)arg2 ;
+(id)substr:(id)arg1 index:(id)arg2 length:(id)arg3 ;
+(id)trim:(id)arg1 pattern:(id)arg2 ;
+(id)typeOf:(id)arg1 ;
+(id)upper:(id)arg1 ;
+(id)likely:(id)arg1 ;
+(id)unlikely:(id)arg1 ;
-(NSString *)name;
-(NSArray *)arguments;
-(NSString *)ef_SQLExpression;
-(id)initWithName:(id)arg1 arguments:(id)arg2 ;
-(id)ef_aggregateColumnExpression;
@end

