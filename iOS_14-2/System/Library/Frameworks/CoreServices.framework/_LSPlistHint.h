/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasValueForKey:(id)arg1 ;
-(NSSet *)keys;
-(id)cachedValueForKey:(id)arg1 ;
-(id)debugDescription;
-(void)setCompleteDictionary:(NSDictionary *)arg1 ;
-(id)initWithKeys:(id)arg1 compacted:(BOOL)arg2 ;
-(NSDictionary *)completeDictionary;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
@end

