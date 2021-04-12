/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@class NSDictionary, NSURL, NSString, MAAsset;

@interface DDSAsset : NSObject {

	NSDictionary* _attributes;
	NSURL* _localURL;
	unsigned long long _assetState;
	NSString* _dataType;
	NSString* _assetType;
	MAAsset* _maAsset;
	NSString* _debuggingID;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,retain) MAAsset * maAsset;                                      //@synthesize maAsset=_maAsset - In the implementation block
@property (nonatomic,retain) NSString * debuggingID;                                 //@synthesize debuggingID=_debuggingID - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;                            //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes;                            //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) unsigned long long compatibilityVersion; 
@property (nonatomic,readonly) unsigned long long contentVersion; 
@property (nonatomic,readonly) NSURL * localURL;                                     //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,readonly) unsigned long long assetState;                        //@synthesize assetState=_assetState - In the implementation block
@property (nonatomic,readonly) NSString * locale; 
@property (nonatomic,readonly) NSString * dataType;                                  //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) NSString * assetType;                                 //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) NSString * installDate; 
@property (nonatomic,readonly) NSString * shortName; 
@property (nonatomic,readonly) NSString * assetUUID; 
+(id)asset;
+(id)uniqueIdentifierForMAAsset:(id)arg1 ;
+(id)assetWithMAAsset:(id)arg1 ;
+(id)debuggingIDsForAssets:(id)arg1 ;
-(NSString *)dataType;
-(unsigned long long)compatibilityVersion;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)assetType;
-(NSString *)locale;
-(id)init;
-(NSURL *)localURL;
-(NSString *)installDate;
-(NSString *)uniqueIdentifier;
-(NSString *)shortName;
-(NSDictionary *)attributes;
-(NSString *)assetUUID;
-(id)description;
-(MAAsset *)maAsset;
-(unsigned long long)contentVersion;
-(unsigned long long)assetState;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMaAsset:(MAAsset *)arg1 ;
-(NSString *)debuggingID;
-(BOOL)isEqualToAsset:(id)arg1 ;
-(void)_mergeAttributes:(id)arg1 ;
-(void)setDebuggingID:(NSString *)arg1 ;
@end

