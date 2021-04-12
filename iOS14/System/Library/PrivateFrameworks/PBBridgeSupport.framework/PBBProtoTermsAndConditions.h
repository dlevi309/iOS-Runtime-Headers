/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PBBProtoTermsAndConditions : PBCodable <NSCopying> {

	NSString* _agreeDialogText;
	NSString* _agreeDialogTitle;
	NSString* _agreeLabel;
	NSString* _cancelLabel;
	NSString* _disagreeLabel;
	NSData* _license;
	NSString* _licenseLabel;
	NSData* _multiterms;
	NSData* _serverTerms;
	NSString* _userAgent;
	NSData* _warranty;
	NSString* _warrantyLabel;

}

@property (nonatomic,readonly) BOOL hasLicense; 
@property (nonatomic,retain) NSData * license;                         //@synthesize license=_license - In the implementation block
@property (nonatomic,readonly) BOOL hasMultiterms; 
@property (nonatomic,retain) NSData * multiterms;                      //@synthesize multiterms=_multiterms - In the implementation block
@property (nonatomic,readonly) BOOL hasWarranty; 
@property (nonatomic,retain) NSData * warranty;                        //@synthesize warranty=_warranty - In the implementation block
@property (nonatomic,readonly) BOOL hasLicenseLabel; 
@property (nonatomic,retain) NSString * licenseLabel;                  //@synthesize licenseLabel=_licenseLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasWarrantyLabel; 
@property (nonatomic,retain) NSString * warrantyLabel;                 //@synthesize warrantyLabel=_warrantyLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasAgreeDialogTitle; 
@property (nonatomic,retain) NSString * agreeDialogTitle;              //@synthesize agreeDialogTitle=_agreeDialogTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasAgreeDialogText; 
@property (nonatomic,retain) NSString * agreeDialogText;               //@synthesize agreeDialogText=_agreeDialogText - In the implementation block
@property (nonatomic,readonly) BOOL hasAgreeLabel; 
@property (nonatomic,retain) NSString * agreeLabel;                    //@synthesize agreeLabel=_agreeLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasCancelLabel; 
@property (nonatomic,retain) NSString * cancelLabel;                   //@synthesize cancelLabel=_cancelLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasDisagreeLabel; 
@property (nonatomic,retain) NSString * disagreeLabel;                 //@synthesize disagreeLabel=_disagreeLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasServerTerms; 
@property (nonatomic,retain) NSData * serverTerms;                     //@synthesize serverTerms=_serverTerms - In the implementation block
@property (nonatomic,readonly) BOOL hasUserAgent; 
@property (nonatomic,retain) NSString * userAgent;                     //@synthesize userAgent=_userAgent - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)cancelLabel;
-(void)setCancelLabel:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)userAgent;
-(NSData *)license;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasUserAgent;
-(void)setWarranty:(NSData *)arg1 ;
-(NSData *)warranty;
-(void)setLicense:(NSData *)arg1 ;
-(void)setMultiterms:(NSData *)arg1 ;
-(BOOL)hasLicense;
-(BOOL)hasMultiterms;
-(BOOL)hasWarranty;
-(NSData *)multiterms;
-(void)setServerTerms:(NSData *)arg1 ;
-(void)setLicenseLabel:(NSString *)arg1 ;
-(void)setWarrantyLabel:(NSString *)arg1 ;
-(void)setAgreeDialogTitle:(NSString *)arg1 ;
-(void)setAgreeDialogText:(NSString *)arg1 ;
-(void)setAgreeLabel:(NSString *)arg1 ;
-(void)setDisagreeLabel:(NSString *)arg1 ;
-(BOOL)hasLicenseLabel;
-(BOOL)hasWarrantyLabel;
-(BOOL)hasAgreeDialogTitle;
-(BOOL)hasAgreeDialogText;
-(BOOL)hasAgreeLabel;
-(BOOL)hasCancelLabel;
-(BOOL)hasDisagreeLabel;
-(BOOL)hasServerTerms;
-(NSString *)licenseLabel;
-(NSString *)warrantyLabel;
-(NSString *)agreeDialogTitle;
-(NSString *)agreeDialogText;
-(NSString *)agreeLabel;
-(NSString *)disagreeLabel;
-(NSData *)serverTerms;
@end

