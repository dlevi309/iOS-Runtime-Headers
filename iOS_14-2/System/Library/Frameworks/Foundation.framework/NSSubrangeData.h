/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData;

@interface NSSubrangeData : NSData {

	NSRange _range;
	NSData* _data;

}
-(id)init;
-(const void*)bytes;
-(unsigned long long)length;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(BOOL)_isCompact;
-(void)getBytes:(void*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 range:(NSRange)arg2 ;
@end

