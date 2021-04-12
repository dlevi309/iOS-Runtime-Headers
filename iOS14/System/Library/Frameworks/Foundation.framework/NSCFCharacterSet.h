/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableCharacterSet.h>

@interface NSCFCharacterSet : NSMutableCharacterSet
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(Class)classForKeyedArchiver;
-(oneway void)release;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(void)removeCharactersInString:(id)arg1 ;
-(BOOL)allowsWeakReference;
-(id)retain;
-(BOOL)retainWeakReference;
-(Class)classForArchiver;
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
-(void)makeCharacterSetCompact;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(void)makeCharacterSetFast;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)bitmapRepresentation;
@end

