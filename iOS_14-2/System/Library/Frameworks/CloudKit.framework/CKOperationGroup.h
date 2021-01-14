/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKOperationGroupSystemImposedInfo, CKOperationConfiguration, NSString, NSNumber;

@interface CKOperationGroup : NSObject <NSSecureCoding> {

	CKOperationGroupSystemImposedInfo* _systemImposedInfo_locked;
	long long _expectedSendSize;
	long long _expectedReceiveSize;
	CKOperationConfiguration* _defaultConfiguration;
	NSString* _operationGroupID;
	NSString* _name;
	NSNumber* _quantityNumber;
	NSString* _authPromptReason;

}

@property (nonatomic,copy) CKOperationGroupSystemImposedInfo * systemImposedInfo; 
@property (nonatomic,copy) NSNumber * quantityNumber;                                          //@synthesize quantityNumber=_quantityNumber - In the implementation block
@property (copy) NSString * authPromptReason;                                                  //@synthesize authPromptReason=_authPromptReason - In the implementation block
@property (nonatomic,readonly) long long approximateSendBytes; 
@property (nonatomic,readonly) long long approximateReceiveBytes; 
@property (nonatomic,copy,readonly) NSString * operationGroupID;                               //@synthesize operationGroupID=_operationGroupID - In the implementation block
@property (copy) CKOperationConfiguration * defaultConfiguration;                              //@synthesize defaultConfiguration=_defaultConfiguration - In the implementation block
@property (copy) NSString * name;                                                              //@synthesize name=_name - In the implementation block
@property (assign) unsigned long long quantity; 
@property (assign) long long expectedSendSize;                                                 //@synthesize expectedSendSize=_expectedSendSize - In the implementation block
@property (assign) long long expectedReceiveSize;                                              //@synthesize expectedReceiveSize=_expectedReceiveSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)quantityNumber;
-(CKOperationConfiguration *)defaultConfiguration;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(long long)_approximateBytesForTransferSize:(long long)arg1 ;
-(void)setDefaultConfiguration:(CKOperationConfiguration *)arg1 ;
-(id)init;
-(CKOperationGroupSystemImposedInfo *)systemImposedInfo;
-(void)setQuantityNumber:(NSNumber *)arg1 ;
-(void)setExpectedSendSize:(long long)arg1 ;
-(void)setAuthPromptReason:(NSString *)arg1 ;
-(void)setSystemImposedInfo:(CKOperationGroupSystemImposedInfo *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)quantity;
-(void)setExpectedReceiveSize:(long long)arg1 ;
-(NSString *)operationGroupID;
-(NSString *)name;
-(id)description;
-(long long)approximateSendBytes;
-(NSString *)authPromptReason;
-(long long)expectedSendSize;
-(id)initWithCoder:(id)arg1 ;
-(void)setQuantity:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)expectedReceiveSize;
-(unsigned long long)resolvedNetworkServiceTypeForConfig:(id)arg1 ;
-(long long)approximateReceiveBytes;
@end

