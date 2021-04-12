/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)keyValues;
-(void)setKeyValues:(NSDictionary *)arg1 ;
-(id)keysWithAnyOfAttributes:(unsigned long long)arg1 ;
-(NSSet *)dataBoundKeys;
-(void)setNeedsResolutionForKey:(id)arg1 ;
-(NSSet *)unresolvedKeys;
-(void)markResolvedForKey:(id)arg1 ;
-(id)unresolvedKeysWithAnyOfAttributes:(unsigned long long)arg1 ;
-(id)dataBoundKeysWithAnyOfAttributes:(unsigned long long)arg1 ;
-(void)setNeedsResolutionForAllKeys;
@end

