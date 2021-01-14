/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <libobjc.A.dylib/STStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/STStatusDomainData.h>

@class STActivityAttributionCatalog, NSSet, NSString;

@interface STCallingStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData> {

	STActivityAttributionCatalog* _attributionCatalog;

}

@property (nonatomic,copy,readonly) STActivityAttributionCatalog * attributionCatalog;              //@synthesize attributionCatalog=_attributionCatalog - In the implementation block
@property (nonatomic,copy,readonly) NSSet * activeCallAttributions; 
@property (nonatomic,copy,readonly) NSSet * ringingCallAttributions; 
@property (nonatomic,copy,readonly) NSSet * activeVideoConferenceAttributions; 
@property (nonatomic,copy,readonly) NSSet * ringingVideoConferenceAttributions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)succinctDescription;
-(id)initWithAttributionCatalog:(id)arg1 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(STActivityAttributionCatalog *)attributionCatalog;
-(NSSet *)ringingVideoConferenceAttributions;
-(id)initWithData:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)_initWithAttributionCatalog:(id)arg1 ;
-(id)diffFromData:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)activeCallAttributions;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSSet *)ringingCallAttributions;
-(id)succinctDescriptionBuilder;
-(id)dataByApplyingDiff:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)activeVideoConferenceAttributions;
-(BOOL)isEqual:(id)arg1 ;
@end

