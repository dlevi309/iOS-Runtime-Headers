/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKOperationConfiguration, NSString, CKOperationGroupSystemImposedInfo, NSNumber;

@interface CKOperationGroup : NSObject <NSSecureCoding> {

	long long _expectedSendSize;
	long long _expectedReceiveSize;
	CKOperationConfiguration* _defaultConfiguration;
	NSString* _operationGroupID;
	NSString* _name;
	CKOperationGroupSystemImposedInfo* _systemImposedInfo;
	NSNumber* _quantityNumber;
	NSString* _authPromptReason;

}

@property (nonatomic,retain) CKOperationGroupSystemImposedInfo * systemImposedInfo;              //@synthesize systemImposedInfo=_systemImposedInfo - In the implementation block
@property (nonatomic,copy) NSNumber * quantityNumber;                                            //@synthesize quantityNumber=_quantityNumber - In the implementation block
@property (copy) NSString * authPromptReason;                                                    //@synthesize authPromptReason=_authPromptReason - In the implementation block
@property (nonatomic,readonly) long long approximateSendBytes; 
@property (nonatomic,readonly) long long approximateReceiveBytes; 
@property (nonatomic,copy,readonly) NSString * operationGroupID;                                 //@synthesize operationGroupID=_operationGroupID - In the implementation block
@property (copy) CKOperationConfiguration * defaultConfiguration;                                //@synthesize defaultConfiguration=_defaultConfiguration - In the implementation block
@property (copy) NSString * name;                                                                //@synthesize name=_name - In the implementation block
@property (assign) unsigned long long quantity; 
@property (assign) long long expectedSendSize;                                                   //@synthesize expectedSendSize=_expectedSendSize - In the implementation block
@property (assign) long long expectedReceiveSize;                                                //@synthesize expectedReceiveSize=_expectedReceiveSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CKOperationConfiguration *)defaultConfiguration;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)setDefaultConfiguration:(CKOperationConfiguration *)arg1 ;
-(void)setSystemImposedInfo:(CKOperationGroupSystemImposedInfo *)arg1 ;
-(NSString *)authPromptReason;
-(NSNumber *)quantityNumber;
-(void)setQuantityNumber:(NSNumber *)arg1 ;
-(CKOperationGroupSystemImposedInfo *)systemImposedInfo;
-(long long)expectedSendSize;
-(long long)expectedReceiveSize;
-(long long)_approximateBytesForTransferSize:(long long)arg1 ;
-(NSString *)operationGroupID;
-(unsigned long long)quantity;
-(void)setQuantity:(unsigned long long)arg1 ;
-(void)setExpectedSendSize:(long long)arg1 ;
-(void)setExpectedReceiveSize:(long long)arg1 ;
-(long long)approximateSendBytes;
-(long long)approximateReceiveBytes;
-(unsigned long long)resolvedNetworkServiceTypeForConfig:(id)arg1 ;
-(void)setAuthPromptReason:(NSString *)arg1 ;
@end

