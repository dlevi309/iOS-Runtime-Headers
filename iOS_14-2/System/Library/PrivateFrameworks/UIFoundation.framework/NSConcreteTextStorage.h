/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextStorage.h>

@class NSConcreteNotifyingMutableAttributedString;

@interface NSConcreteTextStorage : NSTextStorage {

	NSConcreteNotifyingMutableAttributedString* _contents;
	opaque_pthread_rwlock_t _lock;
	struct {
		unsigned _forceFixAttributes : 1;
		unsigned _needLock : 1;
		unsigned _lockInitialized : 1;
		unsigned _inFixingAttributes : 1;
		unsigned _reserved : 28;
	}  _pFlags;

}
+(unsigned long long)_writerCountTSDKey;
-(void)_setForceFixAttributes:(BOOL)arg1 ;
-(BOOL)_attributeFixingInProgress;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(BOOL)_lockForReading;
-(void)_unlock;
-(void)_initLocks;
-(void)_setAttributeFixingInProgress:(BOOL)arg1 ;
-(BOOL)fixesAttributesLazily;
-(BOOL)_forceFixAttributes;
-(BOOL)_lockForWritingWithExceptionHandler:(BOOL)arg1 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(id)init;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(unsigned long long)length;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)initWithAttributedString:(id)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(Class)classForCoder;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)string;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)dealloc;
@end

