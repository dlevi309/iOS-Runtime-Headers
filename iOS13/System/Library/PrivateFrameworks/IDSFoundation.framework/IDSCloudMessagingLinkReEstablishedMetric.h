/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>
#import <libobjc.A.dylib/CUTAWDMetric.h>

@class NSDictionary, NSString;

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
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(double)inactiveTime;
-(unsigned long long)linkType;
-(unsigned long long)priorLinkType;
-(unsigned)awdIdentifier;
-(PBCodable*<NSCopying>)awdRepresentation;
-(id)initWithInactiveTime:(double)arg1 linkType:(unsigned long long)arg2 priorLinkType:(unsigned long long)arg3 ;
@end

