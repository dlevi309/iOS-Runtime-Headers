/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSExpression;

@interface ACHBackCompatMonthlyChallengeDefinition : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSString* _typeString;
	NSExpression* _goalExpression;

}

@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * typeString;                      //@synthesize typeString=_typeString - In the implementation block
@property (nonatomic,readonly) NSExpression * goalExpression;              //@synthesize goalExpression=_goalExpression - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)definitionFromData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)typeString;
-(id)template;
-(NSExpression *)goalExpression;
-(unsigned long long)_monthlyChallengeTypeFromTypeString;
-(id)_dateComponentsFromIdentifier;
-(id)_goalExpressionValue;
@end

