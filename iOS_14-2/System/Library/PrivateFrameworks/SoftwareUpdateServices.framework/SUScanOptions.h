/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <SoftwareUpdateServices/SUOptionsBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableSet, NSSet;

@interface SUScanOptions : SUOptionsBase <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	BOOL _forced;
	NSMutableSet* _types;
	NSString* _requestedPMV;
	BOOL _MDMUseDelayPeriod;
	NSString* _sessionID;

}

@property (nonatomic,retain) NSSet * types;                            //@synthesize types=_types - In the implementation block
@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isForced,nonatomic) BOOL forced;              //@synthesize forced=_forced - In the implementation block
@property (nonatomic,retain) NSString * requestedPMV;                  //@synthesize requestedPMV=_requestedPMV - In the implementation block
@property (assign,nonatomic) BOOL MDMUseDelayPeriod;                   //@synthesize MDMUseDelayPeriod=_MDMUseDelayPeriod - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSSet *)types;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(id)init;
-(void)clearTypes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)addType:(int)arg1 ;
-(BOOL)isForced;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setTypes:(NSSet *)arg1 ;
-(NSString *)identifier;
-(void)setForced:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)requestedPMV;
-(BOOL)MDMUseDelayPeriod;
-(void)setRequestedPMV:(NSString *)arg1 ;
-(void)setMDMUseDelayPeriod:(BOOL)arg1 ;
-(BOOL)containsType:(int)arg1 ;
-(void)removeType:(int)arg1 ;
-(BOOL)findsAnyUpdate;
@end

