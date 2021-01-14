/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>
#import <libobjc.A.dylib/CUTAWDMetric.h>

@class NSString, NSDictionary;

@interface IDSCloudMessagingLinkReEstablishedMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric> {

	double _inactiveTime;
	unsigned long long _linkType;
	unsigned long long _priorLinkType;

}

@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned awdIdentifier; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) PBCodable*<NSCopying> awdRepresentation; 
@property (nonatomic,readonly) double inactiveTime;                                  //@synthesize inactiveTime=_inactiveTime - In the implementation block
@property (nonatomic,readonly) unsigned long long linkType;                          //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,readonly) unsigned long long priorLinkType;                     //@synthesize priorLinkType=_priorLinkType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)linkType;
-(NSString *)name;
-(unsigned)awdIdentifier;
-(PBCodable*<NSCopying>)awdRepresentation;
-(double)inactiveTime;
-(unsigned long long)priorLinkType;
-(id)initWithInactiveTime:(double)arg1 linkType:(unsigned long long)arg2 priorLinkType:(unsigned long long)arg3 ;
@end

