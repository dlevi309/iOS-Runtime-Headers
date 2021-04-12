/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <CoreFoundation/NSDictionary.h>

@class NSDictionary;

@interface WLKSortedKeyDictionary : NSDictionary {

	NSDictionary* _underlyingDictionary;

}

@property (nonatomic,copy) NSDictionary * underlyingDictionary;              //@synthesize underlyingDictionary=_underlyingDictionary - In the implementation block
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(NSDictionary *)underlyingDictionary;
-(void)setUnderlyingDictionary:(NSDictionary *)arg1 ;
@end

