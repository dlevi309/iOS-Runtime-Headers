/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface SFRankingFeedback : SFFeedback <NSCopying> {

	double _blendingDuration;
	NSArray* _sections;
	NSString* _l2ModelVersion;
	NSString* _l3ModelVersion;
	NSString* _l2ShadowModelVersion;

}

@property (assign,nonatomic) double blendingDuration;                    //@synthesize blendingDuration=_blendingDuration - In the implementation block
@property (nonatomic,copy) NSArray * sections;                           //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSString * l2ModelVersion;                    //@synthesize l2ModelVersion=_l2ModelVersion - In the implementation block
@property (nonatomic,copy) NSString * l3ModelVersion;                    //@synthesize l3ModelVersion=_l3ModelVersion - In the implementation block
@property (nonatomic,copy) NSString * l2ShadowModelVersion;              //@synthesize l2ShadowModelVersion=_l2ShadowModelVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSections:(NSArray *)arg1 ;
-(void)setL2ShadowModelVersion:(NSString *)arg1 ;
-(void)setBlendingDuration:(double)arg1 ;
-(NSString *)l2ModelVersion;
-(NSArray *)sections;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSections:(id)arg1 blendingDuration:(double)arg2 ;
-(NSString *)l3ModelVersion;
-(NSString *)l2ShadowModelVersion;
-(id)initWithCoder:(id)arg1 ;
-(void)setL2ModelVersion:(NSString *)arg1 ;
-(double)blendingDuration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setL3ModelVersion:(NSString *)arg1 ;
@end

