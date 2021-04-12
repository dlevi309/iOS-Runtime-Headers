/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface SUCorePolicyPreflightFDRRecovery : NSObject <NSSecureCoding, NSCopying> {

	BOOL _performPhase;
	NSDictionary* _basePreflightOptions;
	NSDictionary* _additionalOptions;

}

@property (assign,nonatomic) BOOL performPhase;                                //@synthesize performPhase=_performPhase - In the implementation block
@property (nonatomic,retain) NSDictionary * basePreflightOptions;              //@synthesize basePreflightOptions=_basePreflightOptions - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalOptions;                 //@synthesize additionalOptions=_additionalOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)summary;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)additionalOptions;
-(void)setAdditionalOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)basePreflightOptions;
-(void)setBasePreflightOptions:(NSDictionary *)arg1 ;
-(BOOL)performPhase;
-(void)setPerformPhase:(BOOL)arg1 ;
@end

