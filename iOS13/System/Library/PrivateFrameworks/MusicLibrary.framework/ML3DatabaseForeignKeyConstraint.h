/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class ML3DatabaseTable, NSArray;

@interface ML3DatabaseForeignKeyConstraint : NSObject {

	ML3DatabaseTable* _foreignTable;
	NSArray* _localColumns;
	NSArray* _foreignColumns;

}

@property (nonatomic,readonly) ML3DatabaseTable * foreignTable;              //@synthesize foreignTable=_foreignTable - In the implementation block
@property (nonatomic,readonly) NSArray * localColumns;                       //@synthesize localColumns=_localColumns - In the implementation block
@property (nonatomic,readonly) NSArray * foreignColumns;                     //@synthesize foreignColumns=_foreignColumns - In the implementation block
-(id)initWithForeignTable:(id)arg1 localColumns:(id)arg2 foreignColumns:(id)arg3 ;
-(id)_foreignKeyClauseSQL;
-(ML3DatabaseTable *)foreignTable;
-(NSArray *)localColumns;
-(NSArray *)foreignColumns;
@end

