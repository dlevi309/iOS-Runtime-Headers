/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableCharacterSet.h>

@interface NSCFCharacterSet : NSMutableCharacterSet
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)hash;
-(BOOL)retainWeakReference;
-(BOOL)allowsWeakReference;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)invertedSet;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)addCharactersInString:(id)arg1 ;
-(void)removeCharactersInString:(id)arg1 ;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(void)invert;
-(void)encodeWithCoder:(id)arg1 ;
-(id)bitmapRepresentation;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(void)makeCharacterSetCompact;
-(void)makeCharacterSetFast;
-(Class)classForArchiver;
-(Class)classForKeyedArchiver;
@end

