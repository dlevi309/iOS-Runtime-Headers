/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSBagKeySet.h>

@class NSMutableSet;

@interface AMSMutableBagKeySet : AMSBagKeySet {

	NSMutableSet* _mutableKeys;

}

@property (nonatomic,retain) NSMutableSet * mutableKeys;              //@synthesize mutableKeys=_mutableKeys - In the implementation block
-(id)init;
-(id)keys;
-(void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2 ;
-(void)unionBagKeySet:(id)arg1 ;
-(void)setMutableKeys:(NSMutableSet *)arg1 ;
-(NSMutableSet *)mutableKeys;
-(void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3 ;
@end

