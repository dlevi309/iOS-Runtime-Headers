/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSNumber;

@interface AKIconContext : NSObject <NSSecureCoding> {

	NSData* _data;
	NSNumber* _scale;
	unsigned long long _maskingStyle;

}

@property (nonatomic,retain) NSData * data;                                //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSNumber * scale;                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long maskingStyle;              //@synthesize maskingStyle=_maskingStyle - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMaskingStyle:(unsigned long long)arg1 ;
-(id)init;
-(NSNumber *)scale;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)maskingStyle;
-(NSData *)data;
-(void)setScale:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

