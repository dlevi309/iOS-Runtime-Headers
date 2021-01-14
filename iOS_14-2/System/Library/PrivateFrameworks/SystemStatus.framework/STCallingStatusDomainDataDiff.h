/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <libobjc.A.dylib/STStatusDomainDataDiff.h>

@class STActivityAttributionCatalogDiff, NSString;

@interface STCallingStatusDomainDataDiff : NSObject <STStatusDomainDataDiff> {

	STActivityAttributionCatalogDiff* _attributionCatalogDiff;

}

@property (nonatomic,copy,readonly) STActivityAttributionCatalogDiff * attributionCatalogDiff;              //@synthesize attributionCatalogDiff=_attributionCatalogDiff - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)diffFromData:(id)arg1 toData:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dataByApplyingToData:(id)arg1 ;
-(id)initWithAttributionCatalogDiff:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(STActivityAttributionCatalogDiff *)attributionCatalogDiff;
-(void)applyToMutableData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

