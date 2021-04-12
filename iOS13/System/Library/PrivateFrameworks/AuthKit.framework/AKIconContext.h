/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSNumber *)scale;
-(void)setScale:(NSNumber *)arg1 ;
-(void)setMaskingStyle:(unsigned long long)arg1 ;
-(unsigned long long)maskingStyle;
@end

