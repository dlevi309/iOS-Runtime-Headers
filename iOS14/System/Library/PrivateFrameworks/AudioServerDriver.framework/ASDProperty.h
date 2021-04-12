/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDictionary:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(ASDPropertyAddress *)address;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAddress:(id)arg1 value:(id)arg2 ;
@end

