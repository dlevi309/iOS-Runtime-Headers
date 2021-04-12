/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet;

@interface HKAuthorizationPresentationRequest : NSObject <NSSecureCoding> {

	BOOL _dismissWhenBackgrounded;
	long long _type;
	NSString* _readUsageDescription;
	NSString* _shareUsageDescription;
	NSString* _researchStudyUsageDescription;
	NSSet* _typesRequiringReadAuthorization;
	NSSet* _typesRequiringShareAuthorization;

}

@property (assign,nonatomic) long long type;                                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * readUsageDescription;                                                  //@synthesize readUsageDescription=_readUsageDescription - In the implementation block
@property (nonatomic,copy) NSString * shareUsageDescription;                                                 //@synthesize shareUsageDescription=_shareUsageDescription - In the implementation block
@property (nonatomic,copy) NSString * researchStudyUsageDescription;                                         //@synthesize researchStudyUsageDescription=_researchStudyUsageDescription - In the implementation block
@property (nonatomic,copy) NSSet * typesRequiringReadAuthorization;                                          //@synthesize typesRequiringReadAuthorization=_typesRequiringReadAuthorization - In the implementation block
@property (nonatomic,copy) NSSet * typesRequiringShareAuthorization;                                         //@synthesize typesRequiringShareAuthorization=_typesRequiringShareAuthorization - In the implementation block
@property (assign,getter=shouldDismissWhenBackgrounded,nonatomic) BOOL dismissWhenBackgrounded;              //@synthesize dismissWhenBackgrounded=_dismissWhenBackgrounded - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)readUsageDescription;
-(NSString *)shareUsageDescription;
-(NSString *)researchStudyUsageDescription;
-(BOOL)shouldDismissWhenBackgrounded;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)typesRequiringReadAuthorization;
-(void)setReadUsageDescription:(NSString *)arg1 ;
-(void)setResearchStudyUsageDescription:(NSString *)arg1 ;
-(void)setTypesRequiringReadAuthorization:(NSSet *)arg1 ;
-(void)setDismissWhenBackgrounded:(BOOL)arg1 ;
-(NSSet *)typesRequiringShareAuthorization;
-(void)setShareUsageDescription:(NSString *)arg1 ;
-(void)setTypesRequiringShareAuthorization:(NSSet *)arg1 ;
@end

