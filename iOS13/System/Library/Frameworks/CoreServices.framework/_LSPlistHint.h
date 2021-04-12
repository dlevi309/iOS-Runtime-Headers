/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


#import <CoreServices/CoreServices-Structs.h>
@class NSSet, NSDictionary;

@interface _LSPlistHint : NSObject {

	NSSet* _keys;
	NSDictionary* _cachedValues;
	os_unfair_lock_s _valueLock;
	BOOL _cachedValuesAreComplete;
	BOOL _keysAreCompacted;

}

@property (nonatomic,copy,readonly) NSSet * keys;                  //@synthesize keys=_keys - In the implementation block
@property (retain) NSDictionary * completeDictionary; 
-(id)debugDescription;
-(NSSet *)keys;
-(id)initWithKeys:(id)arg1 compacted:(BOOL)arg2 ;
-(NSDictionary *)completeDictionary;
-(void)setCompleteDictionary:(NSDictionary *)arg1 ;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasValueForKey:(id)arg1 ;
-(id)cachedValueForKey:(id)arg1 ;
@end

