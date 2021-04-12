/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>

@class NSString, NSNumberFormatter;

@interface NSEnergyFormatter : NSFormatter <NSObservable, NSObserver> {

	void* _formatter;
	BOOL _isForFoodEnergyUse;
	void** _reserved[2];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSNumberFormatter * numberFormatter; 
@property (assign) long long unitStyle; 
@property (getter=isForFoodEnergyUse) BOOL forFoodEnergyUse;              //@synthesize isForFoodEnergyUse=_isForFoodEnergyUse - In the implementation block
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(void)setUnitStyle:(long long)arg1 ;
-(long long)unitStyle;
-(id)unitStringFromValue:(double)arg1 unit:(long long)arg2 ;
-(void)receiveObservedValue:(id)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)stringFromValue:(double)arg1 unit:(long long)arg2 ;
-(BOOL)isForFoodEnergyUse;
-(long long)targetUnitFromJoules:(double)arg1 ;
-(id)stringFromJoules:(double)arg1 ;
-(id)unitStringFromJoules:(double)arg1 usedUnit:(long long*)arg2 ;
-(void)setForFoodEnergyUse:(BOOL)arg1 ;
@end

