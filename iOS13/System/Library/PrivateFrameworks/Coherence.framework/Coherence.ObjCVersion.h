/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copy;
-(BOOL)isEmpty;
-(void)apply:(id)arg1 ;
-(BOOL)contains:(id)arg1 ;
-(NSArray *)sortedUUIDs;
-(void)subtract:(id)arg1 ;
-(void)insertWithRange:(NSRange)arg1 replica:(id)arg2 ;
-(void)shallowMerge:(id)arg1 ;
-(id)temporaryComponentsWithExcluding:(id)arg1 ;
-(long long)maxCounter;
-(BOOL)hasTemporaryComponents;
-(BOOL)hasDeltaTo:(id)arg1 ;
-(void)subtractWithRange:(NSRange)arg1 replica:(id)arg2 ;
@end

