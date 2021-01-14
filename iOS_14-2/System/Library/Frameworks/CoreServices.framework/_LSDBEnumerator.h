/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSEnumerator.h>

@interface _LSDBEnumerator : LSEnumerator {

	Context* _context;
	unsigned long long _index;
	id _lastFastObject;
	unsigned _hasReachedEnd : 1;
	unsigned _hasTriedToPrepare : 1;
	unsigned _hasPrepared : 1;

}
-(id)nextObject;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_LS12*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)prepareIfNeeded;
-(id)_initWithContext:(LSContext*)arg1 ;
-(BOOL)_prepareWithContext:(LSContext*)arg1 error:(id*)arg2 ;
-(BOOL)_getObject:(id*)arg1 atIndex:(unsigned long long)arg2 context:(LSContext*)arg3 ;
@end

