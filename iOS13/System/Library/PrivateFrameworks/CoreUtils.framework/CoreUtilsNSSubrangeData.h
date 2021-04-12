/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData;

@interface CoreUtilsNSSubrangeData : NSData {

	NSData* _data;
	NSRange _range;

}
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(BOOL)_isCompact;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(id)initWithData:(id)arg1 range:(NSRange)arg2 ;
-(void)getBytes:(void*)arg1 ;
@end

