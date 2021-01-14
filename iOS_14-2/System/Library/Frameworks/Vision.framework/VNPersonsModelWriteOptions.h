/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VNPersonsModelWriteOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _readOnly;
	unsigned long long _version;

}

@property (assign,nonatomic) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL readOnly;                           //@synthesize readOnly=_readOnly - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setReadOnly:(BOOL)arg1 ;
-(id)init;
-(BOOL)readOnly;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

