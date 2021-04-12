/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class ML3DatabaseResult;

@interface ML3DatabaseRow : NSObject {

	sqlite3_stmtRef _stmt;
	ML3DatabaseResult* _parentResult;

}

@property (nonatomic,readonly) ML3DatabaseResult * parentResult;              //@synthesize parentResult=_parentResult - In the implementation block
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)columnCount;
-(long long)int64ForColumnIndex:(unsigned long long)arg1 ;
-(id)stringForColumnIndex:(unsigned long long)arg1 ;
-(id)dataForColumnIndex:(unsigned long long)arg1 ;
-(id)numberForColumnIndex:(unsigned long long)arg1 ;
-(id)dataForColumnName:(id)arg1 ;
-(double)doubleForColumnIndex:(unsigned long long)arg1 ;
-(double)doubleForColumnName:(id)arg1 ;
-(int)intForColumnIndex:(unsigned long long)arg1 ;
-(int)intForColumnName:(id)arg1 ;
-(long long)int64ForColumnName:(id)arg1 ;
-(id)numberForColumnName:(id)arg1 ;
-(id)stringForColumnName:(id)arg1 ;
-(void)getBlobBytes:(const void*)arg1 outLength:(int*)arg2 forColumnIndex:(unsigned long long)arg3 ;
-(id)valueForColumnIndex:(unsigned long long)arg1 ;
-(id)arrayRepresentation;
-(const char*)cStringForColumnIndex:(unsigned long long)arg1 ;
-(ML3DatabaseResult *)parentResult;
-(id)initWithParentResult:(id)arg1 ;
-(id)valueForColumnName:(id)arg1 ;
-(const char*)cStringForColumnName:(id)arg1 ;
-(void)getBlobBytes:(const void*)arg1 outLength:(int*)arg2 forColumnName:(id)arg3 ;
@end

