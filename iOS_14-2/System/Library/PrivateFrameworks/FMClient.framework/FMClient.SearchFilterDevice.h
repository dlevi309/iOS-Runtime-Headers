/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMClient.SearchFilterDevice : NSObject <NSSecureCoding> {

	 ownerName;
	 ownerDsid;
	 deviceName;
	 deviceClass;
	 productName;
	 productType;

}

@property (readonly,nonatomic) NSString * ownerName; 
@property (readonly,nonatomic) NSString * ownerDsid; 
@property (readonly,nonatomic) NSString * deviceName; 
@property (readonly,nonatomic) NSString * deviceClass; 
@property (readonly,nonatomic) NSString * productName; 
@property (readonly,nonatomic) NSString * productType; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(NSString *)deviceName;
-(NSString *)productName;
-(id)init;
-(NSString *)productType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)deviceClass;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)ownerName;
-(NSString *)ownerDsid;
-(id)initWithOwnerName:(id)arg1 ownerDsid:(id)arg2 deviceName:(id)arg3 deviceClass:(id)arg4 productName:(id)arg5 productType:(id)arg6 ;
@end

