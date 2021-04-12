/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)retainCount;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)invertedSet;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(CFCharacterSetRef)_expandedCFCharacterSet;
-(id)bitmapRepresentation;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)initWithSet:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_expandInverted;
-(id)replacementObjectForKeyedArchiver:(id)arg1 ;
@end

