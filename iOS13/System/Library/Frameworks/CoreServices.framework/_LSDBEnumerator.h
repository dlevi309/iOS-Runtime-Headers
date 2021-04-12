/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_LS8*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)nextObject;
-(BOOL)_prepareWithContext:(LSContext*)arg1 error:(id*)arg2 ;
-(BOOL)prepareIfNeeded;
-(BOOL)_getObject:(id*)arg1 atIndex:(unsigned long long)arg2 context:(LSContext*)arg3 ;
@end

