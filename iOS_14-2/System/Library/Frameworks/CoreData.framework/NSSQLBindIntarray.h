/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)index;
-(NSString *)tableName;
-(void)setIndex:(unsigned)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)setTableName:(NSString *)arg1 ;
-(id)value;
-(void)dealloc;
@end

