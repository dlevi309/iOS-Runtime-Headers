/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSUSparseArray : NSObject <NSCopying> {

	tsuSaPage* _topPage;
	unsigned long long _nonNilCount;
	unsigned _depth;

}

@property (readonly) unsigned long long count; 
+(id)array;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)clear;
-(id)objectForKey:(unsigned long long)arg1 ;
-(void)removeObjectForKey:(unsigned long long)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(void)setObject:(id)arg1 forKey:(unsigned long long)arg2 ;
-(void)foreach:(/*^block*/id)arg1 ;
-(unsigned long long)maxIndexForCurrentDepth;
-(void)increaseDepth;
-(BOOL)hasObjectForKey:(unsigned long long)arg1 ;
@end

