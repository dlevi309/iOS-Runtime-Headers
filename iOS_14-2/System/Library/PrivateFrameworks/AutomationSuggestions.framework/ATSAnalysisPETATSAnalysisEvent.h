/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutomationSuggestions.framework/AutomationSuggestions
*/

#import <AutomationSuggestions/AutomationSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATSAnalysisPETATSAnalysisEvent : PBCodable <NSCopying> {

	unsigned _absoluteAntecedentSupport;
	unsigned _absoluteConsequentSupport;
	unsigned _absoluteSupport;
	NSString* _activityType;
	NSString* _bundleID;
	float _confidence;
	float _conviction;
	NSString* _feedbackAction;
	NSString* _intentClass;
	float _lift;
	float _rulePowerFactor;
	NSString* _sessionId;
	float _support;
	NSString* _trialID;
	NSString* _trigger;
	unsigned _uniqueDaysLastWeek;
	unsigned _uniqueDaysTotal;

}
-(id)dictionaryRepresentation;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

