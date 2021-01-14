/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBUserOnboardingResume : PBCodable <NSCopying> {

	NSString* _onboardResumeStage;

}

@property (nonatomic,readonly) BOOL hasOnboardResumeStage; 
@property (nonatomic,retain) NSString * onboardResumeStage;              //@synthesize onboardResumeStage=_onboardResumeStage - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setOnboardResumeStage:(NSString *)arg1 ;
-(BOOL)hasOnboardResumeStage;
-(NSString *)onboardResumeStage;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

