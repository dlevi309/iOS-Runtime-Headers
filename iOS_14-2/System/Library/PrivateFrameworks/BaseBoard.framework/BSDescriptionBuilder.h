/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionFormatting.h>

@protocol NSObject;
@class NSMutableString, NSString;

@interface BSDescriptionBuilder : NSObject <BSDescriptionFormatting> {

	id<NSObject> _object;
	NSMutableString* _proem;
	NSMutableString* _description;
	BOOL _useDebugDescription;
	int _activeComponent;
	NSString* _activePrefix;

}

@property (assign,nonatomic) int activeComponent;                           //@synthesize activeComponent=_activeComponent - In the implementation block
@property (nonatomic,retain) NSString * activeMultilinePrefix;              //@synthesize activePrefix=_activePrefix - In the implementation block
@property (assign,nonatomic) BOOL useDebugDescription;                      //@synthesize useDebugDescription=_useDebugDescription - In the implementation block
+(id)descriptionForObject:(id)arg1 withObjectsAndNames:(id)arg2 ;
+(id)nameObjectSeparator;
+(id)componentSeparator;
+(id)succinctDescriptionForObject:(id)arg1 ;
+(id)builderWithObject:(id)arg1 ;
+(id)descriptionForObject:(id)arg1 ;
-(id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2 ;
-(id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(BOOL)arg3 ;
-(id)appendPoint:(CGPoint)arg1 withName:(id)arg2 ;
-(void)appendString:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3 ;
-(id)appendInteger:(long long)arg1 withName:(id)arg2 ;
-(id)appendString:(id)arg1 ;
-(id)appendKeys:(id)arg1 ;
-(void)setActiveComponent:(int)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3 ;
-(id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3 ;
-(id)appendBool:(BOOL)arg1 withName:(id)arg2 ifEqualTo:(BOOL)arg3 ;
-(id)build;
-(id)appendInt64:(long long)arg1 withName:(id)arg2 ;
-(void)appendCustomFormatWithName:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)appendString:(id)arg1 withName:(id)arg2 ;
-(id)appendVersionedPID:(long long)arg1 withName:(id)arg2 ;
-(id)appendFormat:(id)arg1 ;
-(id)appendFlag:(long long)arg1 withName:(id)arg2 skipIfNotSet:(BOOL)arg3 ;
-(id)appendKey:(id)arg1 ;
-(id)appendObject:(id)arg1 withName:(id)arg2 ;
-(id)appendSize:(CGSize)arg1 withName:(id)arg2 ;
-(void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 ;
-(id)appendClass:(Class)arg1 withName:(id)arg2 ;
-(id)appendUnsignedInt:(unsigned)arg1 withName:(id)arg2 ;
-(id)appendFloat:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3 ;
-(void)setActiveMultilinePrefix:(NSString *)arg1 ;
-(id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2 ;
-(void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 objectTransformer:(/*^block*/id)arg5 ;
-(void)appendProem:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSString *)activeMultilinePrefix;
-(id)appendTimeInterval:(double)arg1 withName:(id)arg2 decomposeUnits:(BOOL)arg3 ;
-(id)appendPointer:(void*)arg1 withName:(id)arg2 ;
-(id)appendSelector:(SEL)arg1 withName:(id)arg2 ;
-(int)activeComponent;
-(id)appendObjectsAndNames:(id)arg1 ;
-(id)appendDouble:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3 ;
-(void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 ;
-(void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3 objectTransformer:(/*^block*/id)arg4 ;
-(void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3 ;
-(BOOL)useDebugDescription;
-(id)modifyProem:(/*^block*/id)arg1 ;
-(id)appendFloat:(double)arg1 withName:(id)arg2 ;
-(void)appendBodySectionWithName:(id)arg1 multilinePrefix:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)appendFlag:(long long)arg1 withName:(id)arg2 ;
-(id)modifyBody:(/*^block*/id)arg1 ;
-(id)appendInt:(int)arg1 withName:(id)arg2 ;
-(id)appendCString:(const char*)arg1 withName:(id)arg2 ;
-(void)appendDictionarySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3 ;
-(id)appendRect:(CGRect)arg1 withName:(id)arg2 ;
-(id)appendQueue:(id)arg1 withName:(id)arg2 ;
-(id)appendSuper;
-(id)appendBool:(BOOL)arg1 withName:(id)arg2 ;
-(void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 objectTransformer:(/*^block*/id)arg5 ;
-(void)setUseDebugDescription:(BOOL)arg1 ;
@end

