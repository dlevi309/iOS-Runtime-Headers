/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <UIKit/UIElementProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface AXUIElement : NSObject <UIElementProtocol, NSCopying> {

	AXUIElementRef _axElement;
	long long _cachedRefCount;
	NSMutableDictionary* _cachedAttributes;
	BOOL _isValid;

}

@property (nonatomic,readonly) AXUIElementRef axElement;                                 //@synthesize axElement=_axElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSMutableDictionary * cachedAttributes; 
+(void)initialize;
+(void)applyElementAttributeCacheScheme:(unsigned long long)arg1 ;
+(id)uiElementAtCoordinate:(CGPoint)arg1 ;
+(id)uiElementWithAXElement:(AXUIElementRef)arg1 ;
+(id)uiElementAtCoordinate:(CGPoint)arg1 forApplication:(AXUIElementRef)arg2 contextId:(unsigned)arg3 ;
+(id)uiElementWithAXElement:(AXUIElementRef)arg1 cache:(id)arg2 ;
+(AXUIElementRef)systemWideAXUIElement;
+(id)uiSystemWideApplication;
+(id)uiElementAtCoordinate:(CGPoint)arg1 startWithElement:(id)arg2 ;
+(id)uiApplicationAtCoordinate:(CGPoint)arg1 ;
+(id)uiApplicationForContext:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_invalidate;
-(BOOL)isValid;
-(int)pid;
-(NSRange)_selectedTextRange;
-(BOOL)performAXAction:(int)arg1 ;
-(id)stringWithAXAttribute:(long long)arg1 ;
-(CGRect)rectWithAXAttribute:(long long)arg1 ;
-(id)numberWithAXAttribute:(long long)arg1 ;
-(CGPoint)pointWithAXAttribute:(long long)arg1 ;
-(NSRange)rangeWithAXAttribute:(long long)arg1 ;
-(id)objectWithAXAttribute:(long long)arg1 parameter:(void*)arg2 ;
-(id)objectWithAXAttribute:(long long)arg1 ;
-(BOOL)isMockElement;
-(AXUIElementRef)axElement;
-(void)enableCache:(BOOL)arg1 ;
-(void)disableCache;
-(BOOL)canPerformAXAction:(int)arg1 ;
-(id)arrayWithAXAttribute:(long long)arg1 ;
-(BOOL)boolWithAXAttribute:(long long)arg1 ;
-(CGPathRef)pathWithAXAttribute:(long long)arg1 ;
-(NSMutableDictionary *)cachedAttributes;
-(id)uiElementsWithAttribute:(long long)arg1 ;
-(id)uiElementsWithAttribute:(long long)arg1 parameter:(void*)arg2 ;
-(BOOL)performAXAction:(int)arg1 withValue:(id)arg2 ;
-(BOOL)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned)arg3 ;
-(id)previousElementsWithCount:(unsigned long long)arg1 ;
-(id)nextElementsWithCount:(unsigned long long)arg1 ;
-(id)uiElementsWithAttribute:(long long)arg1 parameter:(void*)arg2 fetchAttributes:(BOOL)arg3 ;
-(BOOL)isValidForApplication:(id)arg1 ;
-(void)updateCacheWithAttributes:(id)arg1 ;
-(void)updateCache:(long long)arg1 ;
-(void)setAXAttribute:(long long)arg1 withBOOL:(BOOL)arg2 ;
-(void)setAXAttribute:(long long)arg1 withString:(id)arg2 ;
-(void)setAXAttribute:(long long)arg1 withLong:(long long)arg2 ;
-(void)setAXAttribute:(long long)arg1 withFloat:(float)arg2 ;
-(void)setAXAttribute:(long long)arg1 withNumber:(id)arg2 ;
-(void)setAXAttribute:(long long)arg1 withPoint:(CGPoint)arg2 ;
-(void)setAXAttribute:(long long)arg1 withSize:(CGSize)arg2 ;
-(void)setAXAttribute:(long long)arg1 withRange:(NSRange)arg2 ;
-(void)setAXAttribute:(long long)arg1 withUIElement:(id)arg2 ;
-(void)setAXAttribute:(long long)arg1 withUIElementArray:(id)arg2 ;
-(void)setAXAttribute:(long long)arg1 withArray:(id)arg2 ;
-(void)setAXAttribute:(long long)arg1 withObject:(id)arg2 ;
-(void)setAXAttribute:(long long)arg1 withObject:(id)arg2 synchronous:(BOOL)arg3 ;
-(id)nextElementsIncludingPrefetchedAttributesWithCount:(unsigned long long)arg1 ;
-(id)initWithAXElement:(AXUIElementRef)arg1 cache:(id)arg2 ;
-(id)initWithAXElement:(AXUIElementRef)arg1 ;
-(void)setCachedAttributes:(NSMutableDictionary *)arg1 ;
-(void)_createCache:(BOOL)arg1 ;
-(id)valueArrayWithAXAttributes:(CFArrayRef)arg1 ;
-(void)_setCachedValue:(void*)arg1 forAttribute:(long long)arg2 ;
-(void*)_cachedValueForAttribute:(long long)arg1 ;
-(id)_elementsWithParameter:(long long)arg1 count:(unsigned long long)arg2 prefetchAttributes:(BOOL)arg3 ;
-(id)_objectForRange:(NSRange)arg1 withParameterizedAttribute:(long long)arg2 ;
-(NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(NSRange*)arg3 currentCursorRange:(NSRange)arg4 ;
-(id)_attributedValueForRange:(NSRange)arg1 ;
-(id)_valueForRange:(NSRange)arg1 ;
-(long long)_lineEndPosition;
-(NSRange)_lineRangeForPosition:(unsigned long long)arg1 ;
-(long long)_lineStartPosition;
-(CGColorRef)colorWithAXAttribute:(long long)arg1 ;
-(NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(NSRange*)arg3 ;
-(void)setAXElement:(AXUIElementRef)arg1 ;
-(void*)modifyStaticCacheValue:(void*)arg1 ;
-(id)_outputCache;
@end

