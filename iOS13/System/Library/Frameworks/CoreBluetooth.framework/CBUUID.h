/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)UUIDWithString:(id)arg1 ;
+(id)UUIDWithData:(id)arg1 ;
+(id)UUIDWithCFUUID:(CFUUIDRef)arg1 ;
+(id)UUIDWithNSUUID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSData *)data;
-(NSString *)UUIDString;
-(id)initWithCFUUID:(CFUUIDRef)arg1 ;
-(id)initWithNSUUID:(id)arg1 ;
@end

