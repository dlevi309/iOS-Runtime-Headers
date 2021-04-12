/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface HAPDeviceID : NSObject <NSCopying, NSSecureCoding> {

	NSData* _data;

}

@property (nonatomic,copy,readonly) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceIDString; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(NSData *)data;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deviceIDString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDeviceIDString:(id)arg1 ;
-(id)initWithDeviceIDData:(id)arg1 ;
-(BOOL)isEqualToDeviceID:(id)arg1 ;
@end

