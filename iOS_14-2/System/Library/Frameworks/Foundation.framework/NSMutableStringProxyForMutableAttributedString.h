/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@class NSMutableAttributedString;

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString {

	NSMutableAttributedString* mutableAttributedString;

}
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)initWithMutableAttributedString:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)dealloc;
@end

