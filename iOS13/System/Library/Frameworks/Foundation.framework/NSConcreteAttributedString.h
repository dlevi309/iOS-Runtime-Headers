/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSAttributedString.h>

@class NSString, NSRLEArray;

@interface NSConcreteAttributedString : NSAttributedString {

	NSString* string;
	NSRLEArray* attributes;

}
-(id)init;
-(id)string;
-(void)dealloc;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(id)initWithAttributedString:(id)arg1 ;
-(id)_runArrayHoldingAttributes;
@end

