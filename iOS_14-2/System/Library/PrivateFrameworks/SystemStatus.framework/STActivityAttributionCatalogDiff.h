/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <libobjc.A.dylib/STStatusDomainDataDiff.h>
#import <libobjc.A.dylib/NSCopying.h>

@class STActivityAttributionCatalog, NSDictionary, NSString;

@interface STActivityAttributionCatalogDiff : NSObject <STStatusDomainDataDiff, NSCopying> {

	STActivityAttributionCatalog* _attributionsAdded;
	STActivityAttributionCatalog* _attributionsRemoved;
	NSDictionary* _attributionsCleared;

}

@property (nonatomic,copy,readonly) STActivityAttributionCatalog * attributionsAdded;                //@synthesize attributionsAdded=_attributionsAdded - In the implementation block
@property (nonatomic,copy,readonly) STActivityAttributionCatalog * attributionsRemoved;              //@synthesize attributionsRemoved=_attributionsRemoved - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * attributionsCleared;                              //@synthesize attributionsCleared=_attributionsCleared - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)diffFromCatalog:(id)arg1 toCatalog:(id)arg2 ;
-(id)init;
-(NSDictionary *)attributionsCleared;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(void)applyToMutableCatalog:(id)arg1 ;
-(id)initWithAttributionsAdded:(id)arg1 attributionsRemoved:(id)arg2 attributionsCleared:(id)arg3 ;
-(id)catalogByApplyingToCatalog:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(STActivityAttributionCatalog *)attributionsRemoved;
-(BOOL)isEqual:(id)arg1 ;
-(STActivityAttributionCatalog *)attributionsAdded;
@end

