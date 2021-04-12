/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface HMICameraVideoPosterFrame : NSObject <NSSecureCoding> {

	NSData* _data;
	unsigned long long _width;
	unsigned long long _height;
	SCD_Struct_HM4 _timeOffset;

}

@property (readonly) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (readonly) SCD_Struct_HM4 timeOffset;              //@synthesize timeOffset=_timeOffset - In the implementation block
@property (readonly) unsigned long long width;               //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long height;              //@synthesize height=_height - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(unsigned long long)width;
-(unsigned long long)height;
-(SCD_Struct_HM4)timeOffset;
-(id)initWithData:(id)arg1 timeOffset:(SCD_Struct_HM4)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
@end

