/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableCharacterSet.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface __NSCFCharacterSet : NSMutableCharacterSet <NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(oneway void)release;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(BOOL)_tryRetain;
-(void)removeCharactersInString:(id)arg1 ;
-(id)retain;
-(BOOL)_isDeallocating;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(id)invertedSet;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)invert;
-(void)addCharactersInString:(id)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(Class)classForCoder;
-(void)makeCharacterSetCompact;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(void)makeCharacterSetFast;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)bitmapRepresentation;
@end

