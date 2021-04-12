/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMClient.DiscoveredDevice : NSObject <NSSecureCoding> {

	 deviceName;
	 discoveryId;

}

@property (readonly,nonatomic) NSString * deviceName; 
@property (readonly,nonatomic) NSString * discoveryId; 
@property (readonly,nonatomic) long long hash; 
@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)deviceName;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)discoveryId;
-(id)initWithDeviceName:(id)arg1 discoveryId:(id)arg2 ;
@end

