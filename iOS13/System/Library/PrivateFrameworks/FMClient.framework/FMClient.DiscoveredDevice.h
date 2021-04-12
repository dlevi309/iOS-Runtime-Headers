/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deviceName;
-(NSString *)discoveryId;
-(id)initWithDeviceName:(id)arg1 discoveryId:(id)arg2 ;
@end

