/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

#import <libobjc.A.dylib/BNPresentableUniquelyIdentifying.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString, NSUUID;

@interface BNPresentableIdentification : NSObject <BNPresentableUniquelyIdentifying, BSXPCSecureCoding> {

	NSString* _requesterIdentifier;
	NSString* _requestIdentifier;
	NSUUID* _uniqueIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                   //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * requesterIdentifier;              //@synthesize requesterIdentifier=_requesterIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestIdentifier;                //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
+(id)uniqueIdentificationForPresentable:(id)arg1 ;
+(id)identificationWithRequesterIdentifier:(id)arg1 ;
+(id)identificationWithRequesterIdentifier:(id)arg1 requestIdentifier:(id)arg2 ;
+(id)identificationWithRequesterIdentifier:(id)arg1 requestIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 ;
+(id)genericIdentificationForPresentable:(id)arg1 ;
+(id)requesterIdentificationForPresentable:(id)arg1 ;
-(NSString *)requestIdentifier;
-(NSUUID *)uniqueIdentifier;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(NSString *)requesterIdentifier;
-(NSString *)description;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)initWithRequesterIdentifier:(id)arg1 requestIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 ;
@end

