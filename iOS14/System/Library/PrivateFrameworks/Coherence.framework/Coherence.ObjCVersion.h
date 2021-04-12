/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
*/


#import <Coherence/Coherence-Structs.h>
@class NSArray, NSString;

@interface Coherence.ObjCVersion : NSObject {

	 version;

}

@property (readonly,nonatomic) BOOL isEmpty; 
@property (readonly,nonatomic) long long maxCounter; 
@property (readonly,nonatomic) BOOL hasTemporaryComponents; 
@property (readonly,nonatomic) NSArray * sortedUUIDs; 
@property (readonly,nonatomic) NSString * description; 
-(void)apply:(id)arg1 ;
-(id)init;
-(NSArray *)sortedUUIDs;
-(NSString *)description;
-(id)copy;
-(BOOL)contains:(id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg1 ;
-(void)insertWithRange:(NSRange)arg1 replica:(id)arg2 ;
-(void)shallowMerge:(id)arg1 ;
-(id)temporaryComponentsWithExcluding:(id)arg1 ;
-(void)subtract:(id)arg1 ;
-(long long)maxCounter;
-(BOOL)hasTemporaryComponents;
-(BOOL)hasDeltaTo:(id)arg1 ;
-(void)subtractWithRange:(NSRange)arg1 replica:(id)arg2 ;
@end

