/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSMutableArray;

@interface KTAccount : NSObject <NSSecureCoding> {

	NSData* _accountID;
	NSMutableArray* _devices;

}

@property (retain) NSData * accountID;                    //@synthesize accountID=_accountID - In the implementation block
@property (retain) NSMutableArray * devices;              //@synthesize devices=_devices - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)accountID;
-(void)setAccountID:(NSData *)arg1 ;
-(NSMutableArray *)devices;
-(void)setDevices:(NSMutableArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMutation:(id)arg1 ;
-(id)deviceForDeviceIdVRFOutput:(id)arg1 ;
-(void)addDevicesObject:(id)arg1 ;
-(BOOL)updateWithMutation:(id)arg1 error:(id*)arg2 ;
-(void)removeDevicesObject:(id)arg1 ;
-(id)initWithAccountId:(id)arg1 ;
@end

