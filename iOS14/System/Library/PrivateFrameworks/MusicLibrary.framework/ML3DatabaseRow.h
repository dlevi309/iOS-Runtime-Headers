/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class ML3DatabaseResult;

@interface ML3DatabaseRow : NSObject {

	sqlite3_stmtRef _stmt;
	ML3DatabaseResult* _parentResult;

}

@property (nonatomic,readonly) ML3DatabaseResult * parentResult;              //@synthesize parentResult=_parentResult - In the implementation block
-(id)dictionaryRepresentation;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)initWithParentResult:(id)arg1 ;
-(id)stringForColumnName:(id)arg1 ;
-(int)intForColumnIndex:(unsigned long long)arg1 ;
-(id)init;
-(id)numberForColumnName:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)getBlobBytes:(const void*)arg1 outLength:(int*)arg2 forColumnIndex:(unsigned long long)arg3 ;
-(id)valueForColumnName:(id)arg1 ;
-(long long)int64ForColumnName:(id)arg1 ;
-(ML3DatabaseResult *)parentResult;
-(double)doubleForColumnIndex:(unsigned long long)arg1 ;
-(id)dataForColumnIndex:(unsigned long long)arg1 ;
-(const char*)cStringForColumnIndex:(unsigned long long)arg1 ;
-(void)getBlobBytes:(const void*)arg1 outLength:(int*)arg2 forColumnName:(id)arg3 ;
-(id)arrayRepresentation;
-(id)valueForColumnIndex:(unsigned long long)arg1 ;
-(int)intForColumnName:(id)arg1 ;
-(unsigned long long)columnCount;
-(id)stringForColumnIndex:(unsigned long long)arg1 ;
-(id)dataForColumnName:(id)arg1 ;
-(double)doubleForColumnName:(id)arg1 ;
-(const char*)cStringForColumnName:(id)arg1 ;
-(long long)int64ForColumnIndex:(unsigned long long)arg1 ;
-(id)numberForColumnIndex:(unsigned long long)arg1 ;
@end

