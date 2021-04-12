/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableSet, NSSet;

@interface SUScanOptions : NSObject <NSSecureCoding> {

	NSString* _identifier;
	BOOL _forced;
	NSMutableSet* _types;
	NSString* _requestedPMV;
	BOOL _MDMUseDelayPeriod;

}

@property (nonatomic,retain) NSSet * types;                            //@synthesize types=_types - In the implementation block
@property (nonatomic,retain) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isForced,nonatomic) BOOL forced;              //@synthesize forced=_forced - In the implementation block
@property (nonatomic,retain) NSString * requestedPMV;                  //@synthesize requestedPMV=_requestedPMV - In the implementation block
@property (assign,nonatomic) BOOL MDMUseDelayPeriod;                   //@synthesize MDMUseDelayPeriod=_MDMUseDelayPeriod - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSSet *)types;
-(void)clearTypes;
-(void)addType:(int)arg1 ;
-(BOOL)isForced;
-(void)setForced:(BOOL)arg1 ;
-(void)setTypes:(NSSet *)arg1 ;
-(void)setRequestedPMV:(NSString *)arg1 ;
-(void)setMDMUseDelayPeriod:(BOOL)arg1 ;
-(BOOL)containsType:(int)arg1 ;
-(NSString *)requestedPMV;
-(BOOL)MDMUseDelayPeriod;
-(void)removeType:(int)arg1 ;
-(BOOL)findsAnyUpdate;
@end

