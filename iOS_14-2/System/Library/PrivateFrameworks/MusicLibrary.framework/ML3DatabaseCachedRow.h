/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3DatabaseRow.h>

@class NSArray;

@interface ML3DatabaseCachedRow : ML3DatabaseRow {

	NSArray* _arrayRepresentation;

}
-(id)dictionaryRepresentation;
-(id)initWithParentResult:(id)arg1 ;
-(id)_numberOrZeroForColumnIndex:(unsigned long long)arg1 ;
-(id)stringForColumnName:(id)arg1 ;
-(int)intForColumnIndex:(unsigned long long)arg1 ;
-(id)numberForColumnName:(id)arg1 ;
-(void)getBlobBytes:(const void*)arg1 outLength:(int*)arg2 forColumnIndex:(unsigned long long)arg3 ;
-(id)valueForColumnName:(id)arg1 ;
-(long long)int64ForColumnName:(id)arg1 ;
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
-(id)initWithArray:(id)arg1 ;
@end

