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

@interface NSLengthFormatter : NSFormatter <NSObservable, NSObserver> {

	void* _formatter;
	BOOL _isForPersonHeight;
	void** _reserved[2];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSNumberFormatter * numberFormatter; 
@property (assign) long long unitStyle; 
@property (getter=isForPersonHeightUse) BOOL forPersonHeightUse; 
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
-(BOOL)isForPersonHeightUse;
-(long long)targetUnitFromMeters:(double)arg1 ;
-(id)stringFromValue:(double)arg1 unit:(long long)arg2 ;
-(id)stringFromMeters:(double)arg1 ;
-(void)setForPersonHeightUse:(BOOL)arg1 ;
-(id)unitStringFromMeters:(double)arg1 usedUnit:(long long*)arg2 ;
@end

