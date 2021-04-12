/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSString *)deviceIDString;
-(id)initWithDeviceIDData:(id)arg1 ;
-(BOOL)isEqualToDeviceID:(id)arg1 ;
-(id)initWithDeviceIDString:(id)arg1 ;
@end

