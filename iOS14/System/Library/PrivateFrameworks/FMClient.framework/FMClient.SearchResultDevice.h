/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface FMClient.SearchResultDevice : NSObject <NSSecureCoding> {

	 firstName;
	 lastName;
	 ownerDsid;
	 serverId;
	 deviceName;
	 deviceClass;
	 productName;
	 discoveryId;
	 productType;
	 thisDevice;
	 needsSafety;
	 pairedDevices;

}

@property (readonly,nonatomic) NSString * firstName; 
@property (readonly,nonatomic) NSString * lastName; 
@property (readonly,nonatomic) NSString * ownerDsid; 
@property (readonly,nonatomic) NSString * serverId; 
@property (readonly,nonatomic) NSString * deviceName; 
@property (readonly,nonatomic) NSString * deviceClass; 
@property (readonly,nonatomic) NSString * productName; 
@property (readonly,nonatomic) NSString * discoveryId; 
@property (readonly,nonatomic) NSString * productType; 
@property (readonly,nonatomic) BOOL thisDevice; 
@property (readonly,nonatomic) BOOL needsSafety; 
@property (readonly,nonatomic) NSArray * pairedDevices; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(id)sa_deviceDetailIsOwnerDevice:(id)arg1 ;
-(BOOL)isHeadphoneDevice;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)deviceName;
-(NSString *)productName;
-(id)init;
-(NSString *)productType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)deviceClass;
-(BOOL)thisDevice;
-(NSString *)description;
-(NSArray *)pairedDevices;
-(NSString *)serverId;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)discoveryId;
-(NSString *)ownerDsid;
-(BOOL)needsSafety;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 ownerDsid:(id)arg3 serverId:(id)arg4 deviceName:(id)arg5 deviceClass:(id)arg6 productName:(id)arg7 discoveryId:(id)arg8 productType:(id)arg9 thisDevice:(BOOL)arg10 needsSafety:(BOOL)arg11 pairedDevices:(id)arg12 ;
@end

