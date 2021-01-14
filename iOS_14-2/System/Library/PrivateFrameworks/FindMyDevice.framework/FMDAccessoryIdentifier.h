/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
*/

#import <FindMyDevice/FindMyDevice-Structs.h>
#import <libobjc.A.dylib/FMDCodable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FMDIdentifiable.h>

@class NSString;

@interface FMDAccessoryIdentifier : NSObject <FMDCodable, NSCopying, FMDIdentifiable> {

	NSString* _string;

}

@property (nonatomic,retain) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(BOOL)supportsSecureCoding;
-(id)initWithString:(id)arg1 ;
-(id)initWithAddress:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)stringValue;
-(NSString *)description;
-(BOOL)isValid;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)encodeWithFMDCoder:(id)arg1 error:(id*)arg2 ;
-(id)initWithFMDCoder:(id)arg1 error:(id*)arg2 ;
-(id)computeAccessoryIdentifierWithAddress:(id)arg1 ;
-(id)initWithDeviceVendor:(id)arg1 deviceProductId:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

