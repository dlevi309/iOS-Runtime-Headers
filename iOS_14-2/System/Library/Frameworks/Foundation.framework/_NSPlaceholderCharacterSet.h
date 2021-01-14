/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCharacterSet.h>

@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet {

	NSCharacterSet* _original;
	NSCharacterSet* _invertedSet;
	struct {
		unsigned _inverted : 1;
		unsigned _builtin : 1;
		unsigned _isCF : 1;
		unsigned _reserved : 29;
	}  _flags;

}
-(CFCharacterSetRef)_expandedCFCharacterSet;
-(id)replacementObjectForKeyedArchiver:(id)arg1 ;
-(oneway void)release;
-(BOOL)_tryRetain;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)retain;
-(BOOL)_isDeallocating;
-(id)autorelease;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(id)invertedSet;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)_expandInverted;
-(id)initWithSet:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(unsigned long long)retainCount;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(BOOL)isEmpty;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)bitmapRepresentation;
@end

