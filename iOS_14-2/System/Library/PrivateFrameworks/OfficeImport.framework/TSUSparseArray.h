/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clear;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(unsigned long long)arg1 ;
-(id)description;
-(void)foreach:(/*^block*/id)arg1 ;
-(id)objectForKey:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(unsigned long long)arg2 ;
-(unsigned long long)maxIndexForCurrentDepth;
-(void)increaseDepth;
-(BOOL)hasObjectForKey:(unsigned long long)arg1 ;
@end

