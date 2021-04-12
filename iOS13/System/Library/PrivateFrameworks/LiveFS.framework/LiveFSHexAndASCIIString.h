/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/

#import <LiveFS/LiveFS-Structs.h>
#import <Foundation/NSString.h>

@class NSData;

@interface LiveFSHexAndASCIIString : NSString {

	NSData* data;

}
-(id)init;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)initWithData:(id)arg1 ;
-(id)data;
@end

