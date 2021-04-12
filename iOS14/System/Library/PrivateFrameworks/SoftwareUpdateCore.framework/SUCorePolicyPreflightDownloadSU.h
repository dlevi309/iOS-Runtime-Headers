/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface SUCorePolicyPreflightDownloadSU : NSObject <NSSecureCoding, NSCopying> {

	BOOL _allowsCellular;
	BOOL _discretionary;
	BOOL _skipPhase;
	long long _specifiedFields;
	NSDictionary* _basePreflightOptions;
	NSDictionary* _additionalOptions;

}

@property (assign) long long specifiedFields;                                  //@synthesize specifiedFields=_specifiedFields - In the implementation block
@property (assign,nonatomic) BOOL allowsCellular;                              //@synthesize allowsCellular=_allowsCellular - In the implementation block
@property (assign,nonatomic) BOOL discretionary;                               //@synthesize discretionary=_discretionary - In the implementation block
@property (assign,nonatomic) BOOL skipPhase;                                   //@synthesize skipPhase=_skipPhase - In the implementation block
@property (nonatomic,retain) NSDictionary * basePreflightOptions;              //@synthesize basePreflightOptions=_basePreflightOptions - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalOptions;                 //@synthesize additionalOptions=_additionalOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDiscretionary:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)summary;
-(BOOL)allowsCellular;
-(void)setAllowsCellular:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)discretionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)additionalOptions;
-(void)setAdditionalOptions:(NSDictionary *)arg1 ;
-(void)backToDefaultsWithSkipPhaseSet:(BOOL)arg1 ;
-(long long)specifiedFields;
-(BOOL)skipPhase;
-(void)setSkipPhase:(BOOL)arg1 ;
-(NSDictionary *)basePreflightOptions;
-(void)setBasePreflightOptions:(NSDictionary *)arg1 ;
-(void)setSpecifiedFields:(long long)arg1 ;
-(id)initWithSkipPhaseSet:(BOOL)arg1 ;
@end

