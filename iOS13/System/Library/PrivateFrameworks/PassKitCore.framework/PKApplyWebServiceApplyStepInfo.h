/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString, NSArray;

@interface PKApplyWebServiceApplyStepInfo : NSObject {

	NSString* _conversationIdentifier;
	unsigned long long _contextType;
	NSArray* _pages;
	NSString* _coreIDVSessionID;
	NSString* _coreIDVServiceProviderName;
	NSString* _coreIDVTier;
	NSArray* _encryptionCertificates;
	NSString* _encryptionVersion;

}

@property (nonatomic,copy) NSString * conversationIdentifier;                           //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long contextType;                          //@synthesize contextType=_contextType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pages;                                    //@synthesize pages=_pages - In the implementation block
@property (nonatomic,copy,readonly) NSString * coreIDVSessionID;                        //@synthesize coreIDVSessionID=_coreIDVSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * coreIDVServiceProviderName;              //@synthesize coreIDVServiceProviderName=_coreIDVServiceProviderName - In the implementation block
@property (nonatomic,copy,readonly) NSString * coreIDVTier;                             //@synthesize coreIDVTier=_coreIDVTier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * encryptionCertificates;                   //@synthesize encryptionCertificates=_encryptionCertificates - In the implementation block
@property (nonatomic,copy,readonly) NSString * encryptionVersion;                       //@synthesize encryptionVersion=_encryptionVersion - In the implementation block
-(NSString *)conversationIdentifier;
-(unsigned long long)contextType;
-(NSArray *)pages;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(NSArray *)encryptionCertificates;
-(NSString *)encryptionVersion;
-(void)_handleCertificates:(id)arg1 ;
-(id)initWithJSONObject:(id)arg1 featureApplication:(id)arg2 ;
-(NSString *)coreIDVSessionID;
-(NSString *)coreIDVServiceProviderName;
-(NSString *)coreIDVTier;
@end

