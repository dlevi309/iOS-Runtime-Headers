/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString, NSMutableArray, NSRegularExpression;

@interface PLCoreDataSqlLogBinder : NSObject {

	NSString* _selectString;
	NSMutableArray* _bindValues;
	NSRegularExpression* _selectRegex;
	NSRegularExpression* _bindRegex;

}

@property (copy,readonly) NSString * boundSql; 
-(id)init;
-(NSString *)boundSql;
-(void)addLogLine:(id)arg1 ;
-(id)pool_boundSql;
@end

