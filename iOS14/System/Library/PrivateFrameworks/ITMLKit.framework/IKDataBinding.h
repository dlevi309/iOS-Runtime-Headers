/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSDictionary, NSMutableSet, NSSet;

@interface IKDataBinding : NSObject {

	NSDictionary* _entriesByKey;
	NSMutableSet* _unresolvedKeys;
	NSDictionary* _keyValues;
	NSSet* _dataBoundKeys;

}

@property (nonatomic,copy) NSDictionary * keyValues;                //@synthesize keyValues=_keyValues - In the implementation block
@property (nonatomic,readonly) NSSet * dataBoundKeys;               //@synthesize dataBoundKeys=_dataBoundKeys - In the implementation block
@property (nonatomic,readonly) NSSet * unresolvedKeys; 
-(id)initWithEntries:(id)arg1 ;
-(void)setKeyValues:(NSDictionary *)arg1 ;
-(NSDictionary *)keyValues;
-(id)keysWithAnyOfAttributes:(unsigned long long)arg1 ;
-(NSSet *)dataBoundKeys;
-(void)setNeedsResolutionForKey:(id)arg1 ;
-(NSSet *)unresolvedKeys;
-(void)markResolvedForKey:(id)arg1 ;
-(id)unresolvedKeysWithAnyOfAttributes:(unsigned long long)arg1 ;
-(id)dataBoundKeysWithAnyOfAttributes:(unsigned long long)arg1 ;
-(void)setNeedsResolutionForAllKeys;
@end

