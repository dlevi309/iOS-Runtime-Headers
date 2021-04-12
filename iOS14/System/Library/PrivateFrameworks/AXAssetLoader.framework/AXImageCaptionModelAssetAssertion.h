/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
*/

#import <AXAssetLoader/AXAssetAssertion.h>

@class NSString, NSNumber;

@interface AXImageCaptionModelAssetAssertion : NSObject <AXAssetAssertion> {

	unsigned long long _assertionType;
	NSString* _clientIdentifier;
	NSNumber* _minimumCompatibilityVersion;
	NSNumber* _maximumCompatibilityVersion;
	NSString* _modelVersion;
	NSString* _modelLanguage;
	NSString* _modelStage;

}

@property (assign,nonatomic) unsigned long long assertionType;                    //@synthesize assertionType=_assertionType - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;                         //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * minimumCompatibilityVersion;              //@synthesize minimumCompatibilityVersion=_minimumCompatibilityVersion - In the implementation block
@property (nonatomic,retain) NSNumber * maximumCompatibilityVersion;              //@synthesize maximumCompatibilityVersion=_maximumCompatibilityVersion - In the implementation block
@property (nonatomic,retain) NSString * modelVersion;                             //@synthesize modelVersion=_modelVersion - In the implementation block
@property (nonatomic,retain) NSString * modelLanguage;                            //@synthesize modelLanguage=_modelLanguage - In the implementation block
@property (nonatomic,retain) NSString * modelStage;                               //@synthesize modelStage=_modelStage - In the implementation block
@property (nonatomic,readonly) NSString * assetType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assertionWithPropertyListRepresentation:(id)arg1 error:(id*)arg2 ;
+(void)partitionAssertionsWithPropertyListRepresentations:(id)arg1 intoVersionLockedAssertions:(id)arg2 upgradableAssertions:(id)arg3 ;
+(id)assertionsWithPropertyListRepresentations:(id)arg1 ;
-(NSString *)assetType;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(id)propertyListRepresentation;
-(NSString *)modelVersion;
-(void)setModelVersion:(NSString *)arg1 ;
-(NSString *)description;
-(unsigned long long)assertionType;
-(void)setAssertionType:(unsigned long long)arg1 ;
-(NSString *)clientIdentifier;
-(void)setMinimumCompatibilityVersion:(NSNumber *)arg1 ;
-(void)setMaximumCompatibilityVersion:(NSNumber *)arg1 ;
-(void)setModelStage:(NSString *)arg1 ;
-(void)setModelLanguage:(NSString *)arg1 ;
-(NSNumber *)minimumCompatibilityVersion;
-(NSNumber *)maximumCompatibilityVersion;
-(NSString *)modelLanguage;
-(NSString *)modelStage;
@end

