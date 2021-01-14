/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <Foundation/NSString.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface _PASProxyConcatenatedString : NSString <NSCopying> {

	NSArray* _components;
	unsigned long long* _startIndices;
	unsigned long long _length;

}
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(id)substringWithRange:(NSRange)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

