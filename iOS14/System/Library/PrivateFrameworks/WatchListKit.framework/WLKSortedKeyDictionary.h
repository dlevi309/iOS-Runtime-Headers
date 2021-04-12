/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <CoreFoundation/NSDictionary.h>

@class NSDictionary;

@interface WLKSortedKeyDictionary : NSDictionary {

	NSDictionary* _underlyingDictionary;

}

@property (nonatomic,copy) NSDictionary * underlyingDictionary;              //@synthesize underlyingDictionary=_underlyingDictionary - In the implementation block
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(void)setUnderlyingDictionary:(NSDictionary *)arg1 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg1 ;
-(NSDictionary *)underlyingDictionary;
@end

