/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCContextConfiguration : NSObject <NSCopying> {

	BOOL _isProductionContentEnvironment;
	BOOL _isProductionPrivateDataEnvironment;
	long long _environment;
	NSString* _contentContainerIdentifier;
	NSString* _contentContainerCombinationIdentifier;
	NSString* _privateDataContainerIdentifier;
	NSString* _privateDataSecureContainerIdentifier;
	NSString* _privateDataContainerCombinationIdentifier;

}

@property (nonatomic,readonly) BOOL isProductionContentEnvironment;                                    //@synthesize isProductionContentEnvironment=_isProductionContentEnvironment - In the implementation block
@property (nonatomic,readonly) BOOL isProductionPrivateDataEnvironment;                                //@synthesize isProductionPrivateDataEnvironment=_isProductionPrivateDataEnvironment - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDataContainerIdentifier;                         //@synthesize privateDataContainerIdentifier=_privateDataContainerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDataSecureContainerIdentifier;                   //@synthesize privateDataSecureContainerIdentifier=_privateDataSecureContainerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDataContainerCombinationIdentifier;              //@synthesize privateDataContainerCombinationIdentifier=_privateDataContainerCombinationIdentifier - In the implementation block
@property (nonatomic,readonly) long long environment;                                                  //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentContainerIdentifier;                             //@synthesize contentContainerIdentifier=_contentContainerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentContainerCombinationIdentifier;                  //@synthesize contentContainerCombinationIdentifier=_contentContainerCombinationIdentifier - In the implementation block
+(id)defaultConfiguration;
-(id)init;
-(NSString *)privateDataContainerIdentifier;
-(NSString *)contentContainerIdentifier;
-(NSString *)contentContainerCombinationIdentifier;
-(id)initWithProductionContentEnvironment:(BOOL)arg1 productionPrivateDataEnvironment:(BOOL)arg2 contentContainerIdentifier:(id)arg3 privateDataContainerIdentifier:(id)arg4 privateDataSecureContainerIdentifier:(id)arg5 storeFrontID:(id)arg6 environment:(long long)arg7 ;
-(id)initWithEnvironment:(long long)arg1 ;
-(BOOL)isProductionPrivateDataEnvironment;
-(NSString *)privateDataSecureContainerIdentifier;
-(BOOL)isProductionContentEnvironment;
-(NSString *)privateDataContainerCombinationIdentifier;
-(long long)environment;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

