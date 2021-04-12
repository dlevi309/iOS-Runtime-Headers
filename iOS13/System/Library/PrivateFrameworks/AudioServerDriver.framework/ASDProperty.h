/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASDPropertyAddress;

@interface ASDProperty : NSObject <NSCopying> {

	ASDPropertyAddress* _address;
	id _value;

}

@property (nonatomic,readonly) ASDPropertyAddress * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) id value;                                    //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(ASDPropertyAddress *)address;
-(id)initWithAddress:(id)arg1 value:(id)arg2 ;
@end

