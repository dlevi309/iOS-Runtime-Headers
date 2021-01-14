/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSBagKeySet.h>

@class NSMutableSet;

@interface AMSMutableBagKeySet : AMSBagKeySet {

	NSMutableSet* _mutableKeys;

}

@property (nonatomic,retain) NSMutableSet * mutableKeys;              //@synthesize mutableKeys=_mutableKeys - In the implementation block
-(NSMutableSet *)mutableKeys;
-(id)keys;
-(id)init;
-(void)setMutableKeys:(NSMutableSet *)arg1 ;
-(void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2 ;
-(void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(void)unionBagKeySet:(id)arg1 ;
@end

