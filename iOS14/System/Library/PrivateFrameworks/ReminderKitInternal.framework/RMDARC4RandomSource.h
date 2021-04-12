/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKitInternal.framework/ReminderKitInternal
*/

#import <ReminderKitInternal/ReminderKitInternal-Structs.h>
#import <ReminderKitInternal/RMDRandomSource.h>

@class NSData;

@interface RMDARC4RandomSource : RMDRandomSource {

	Arc4State* _state;
	NSData* _seed;

}

@property (nonatomic,copy) NSData * seed; 
-(NSData *)seed;
-(void)setSeed:(NSData *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)nextBool;
-(unsigned long long)nextBits:(int)arg1 ;
-(float)nextUniform;
-(void)dropValuesWithCount:(unsigned long long)arg1 ;
-(long long)nextInt;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

