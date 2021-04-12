/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)environment;
-(id)initWithEnvironment:(long long)arg1 ;
-(NSString *)contentContainerCombinationIdentifier;
-(NSString *)contentContainerIdentifier;
-(NSString *)privateDataContainerIdentifier;
-(NSString *)privateDataSecureContainerIdentifier;
-(BOOL)isProductionPrivateDataEnvironment;
-(NSString *)privateDataContainerCombinationIdentifier;
-(BOOL)isProductionContentEnvironment;
-(id)initWithProductionContentEnvironment:(BOOL)arg1 productionPrivateDataEnvironment:(BOOL)arg2 contentContainerIdentifier:(id)arg3 privateDataContainerIdentifier:(id)arg4 privateDataSecureContainerIdentifier:(id)arg5 storeFrontID:(id)arg6 environment:(long long)arg7 ;
@end

