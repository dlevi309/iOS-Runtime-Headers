/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface SUCorePolicyResume : NSObject <NSSecureCoding, NSCopying> {

	BOOL _skipPhase;
	long long _specifiedFields;
	NSDictionary* _additionalOptions;

}

@property (assign) long long specifiedFields;                               //@synthesize specifiedFields=_specifiedFields - In the implementation block
@property (assign,nonatomic) BOOL skipPhase;                                //@synthesize skipPhase=_skipPhase - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalOptions;              //@synthesize additionalOptions=_additionalOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)summary;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)additionalOptions;
-(void)setAdditionalOptions:(NSDictionary *)arg1 ;
-(void)backToDefaultsWithSkipPhaseSet:(BOOL)arg1 ;
-(long long)specifiedFields;
-(BOOL)skipPhase;
-(void)setSkipPhase:(BOOL)arg1 ;
-(void)setSpecifiedFields:(long long)arg1 ;
-(id)initWithSkipPhaseSet:(BOOL)arg1 ;
@end

