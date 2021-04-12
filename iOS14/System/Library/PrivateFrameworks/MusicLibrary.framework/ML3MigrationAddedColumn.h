/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class NSString;

@interface ML3MigrationAddedColumn : NSObject {

	NSString* _columnName;
	NSString* _foreignTableName;
	NSString* _foreignColumnName;
	NSString* _joinColumnName;

}

@property (nonatomic,readonly) NSString * columnName;                          //@synthesize columnName=_columnName - In the implementation block
@property (nonatomic,readonly) NSString * foreignTableName;                    //@synthesize foreignTableName=_foreignTableName - In the implementation block
@property (nonatomic,readonly) NSString * foreignColumnName;                   //@synthesize foreignColumnName=_foreignColumnName - In the implementation block
@property (nonatomic,readonly) NSString * joinColumnName;                      //@synthesize joinColumnName=_joinColumnName - In the implementation block
@property (nonatomic,readonly) BOOL shouldImportFromForeignTable; 
-(NSString *)columnName;
-(id)initWithName:(id)arg1 foreignTable:(id)arg2 foreignColumn:(id)arg3 joinColumn:(id)arg4 ;
-(BOOL)shouldImportFromForeignTable;
-(NSString *)joinColumnName;
-(NSString *)foreignTableName;
-(NSString *)foreignColumnName;
@end

