/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSString;

@interface NSSQLBindIntarray : NSObject {

	unsigned _index;
	id _value;
	NSString* _tableName;

}

@property (assign,nonatomic) unsigned index;                    //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) id value;                          //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
-(void)dealloc;
-(id)value;
-(unsigned)index;
-(void)setValue:(id)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(NSString *)tableName;
-(void)setTableName:(NSString *)arg1 ;
@end

