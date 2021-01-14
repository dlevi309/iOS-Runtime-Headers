/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface CBUUID : NSObject <NSCopying> {

	unsigned char _bytes[16];
	char _type;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * UUIDString; 
+(id)UUIDWithCFUUID:(CFUUIDRef)arg1 ;
+(id)UUIDWithData:(id)arg1 ;
+(id)UUIDWithNSUUID:(id)arg1 ;
+(id)UUIDWithString:(id)arg1 ;
-(id)initWithCFUUID:(CFUUIDRef)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)description;
-(NSData *)data;
-(unsigned long long)hash;
-(NSString *)UUIDString;
-(id)initWithNSUUID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

