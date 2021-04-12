/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface HMICameraVideoPosterFrame : NSObject <NSSecureCoding> {

	NSData* _data;
	unsigned long long _width;
	unsigned long long _height;
	SCD_Struct_HM3 _timeOffset;

}

@property (readonly) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (readonly) SCD_Struct_HM3 timeOffset;              //@synthesize timeOffset=_timeOffset - In the implementation block
@property (readonly) unsigned long long width;               //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long height;              //@synthesize height=_height - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)width;
-(SCD_Struct_HM3)timeOffset;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)height;
-(NSData *)data;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithData:(id)arg1 timeOffset:(SCD_Struct_HM3)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
@end

