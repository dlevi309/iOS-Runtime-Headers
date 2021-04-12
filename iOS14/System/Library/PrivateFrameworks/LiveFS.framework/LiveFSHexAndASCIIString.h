/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/

#import <LiveFS/LiveFS-Structs.h>
#import <Foundation/NSString.h>

@class NSData;

@interface LiveFSHexAndASCIIString : NSString {

	NSData* data;

}
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)init;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(id)initWithData:(id)arg1 ;
-(id)data;
@end

