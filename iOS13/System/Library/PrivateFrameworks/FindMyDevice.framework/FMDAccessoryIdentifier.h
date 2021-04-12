/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)string;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(id)stringValue;
-(id)initWithString:(id)arg1 ;
-(id)initWithAddress:(id)arg1 ;
-(BOOL)encodeWithFMDCoder:(id)arg1 error:(id*)arg2 ;
-(id)initWithFMDCoder:(id)arg1 error:(id*)arg2 ;
-(id)computeAccessoryIdentifierWithAddress:(id)arg1 ;
-(id)initWithDeviceVendor:(id)arg1 deviceProductId:(id)arg2 ;
@end
