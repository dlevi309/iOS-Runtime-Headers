/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDCodableWorkoutConfiguration;

@interface HDCodableStartWorkoutAppRequest : PBRequest <NSCopying> {

	NSString* _applicationIdentifier;
	NSString* _requestIdentifier;
	HDCodableWorkoutConfiguration* _workoutConfiguration;

}

@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSString * requestIdentifier;                                      //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationIdentifier; 
@property (nonatomic,retain) NSString * applicationIdentifier;                                  //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasWorkoutConfiguration; 
@property (nonatomic,retain) HDCodableWorkoutConfiguration * workoutConfiguration;              //@synthesize workoutConfiguration=_workoutConfiguration - In the implementation block
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)requestIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)applicationIdentifier;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setWorkoutConfiguration:(HDCodableWorkoutConfiguration *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasApplicationIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HDCodableWorkoutConfiguration *)workoutConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasRequestIdentifier;
-(BOOL)hasWorkoutConfiguration;
@end

