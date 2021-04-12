/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@class NSSharedKeySet, NSMutableDictionary;

@interface PASScoreDict : NSObject {

	vector<float, std::__1::allocator<float> >* _mphtStorage;
	NSSharedKeySet* _sharedKeySet;
	NSMutableDictionary* _sideDict;

}

@property (nonatomic,readonly) unsigned long long count; 
+(id)scoreDictFromDictionary:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(id)initWithDefaultValueForSharedKeySet:(id)arg1 ;
-(id)initWithDefaultValueForKeys:(id)arg1 ;
-(id)initWithDefaultValueForScoreInputSetKeys:(id)arg1 ;
-(void)setScore:(double)arg1 forKey:(id)arg2 ;
-(double)scoreForKey:(id)arg1 found:(BOOL*)arg2 ;
-(void)setScore:(double)arg1 forSharedKeySetIndex:(unsigned long long)arg2 ;
-(double)scoreForSharedKeySetIndex:(unsigned long long)arg1 ;
-(id)toDictionary;
@end

