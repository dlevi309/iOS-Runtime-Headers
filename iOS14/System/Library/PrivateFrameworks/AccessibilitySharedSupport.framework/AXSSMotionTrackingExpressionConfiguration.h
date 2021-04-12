/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDictionary;

@interface AXSSMotionTrackingExpressionConfiguration : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* __facialExpressionToSensitivity;

}

@property (nonatomic,retain) NSMutableDictionary * _facialExpressionToSensitivity;              //@synthesize _facialExpressionToSensitivity=__facialExpressionToSensitivity - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * plistDictionary; 
+(BOOL)supportsSecureCoding;
+(id)_defaultSensitivitiesForAllFacialExpressions;
+(float)_minConfidenceExpressionStarted:(unsigned long long)arg1 usingExpressionConfiguration:(id)arg2 ;
+(float)_newJawOpenExpressionStartedMinConfidence:(float)arg1 mouthClose:(float)arg2 expressionConfiguration:(id)arg3 ;
+(float)_newJawOpenContinuingMinConfidence:(float)arg1 mouthClose:(float)arg2 jawOpenExpressionStartedMinConfidence:(float)arg3 ;
+(id)_facicalExpressionToSensitivityToValueMapping;
+(id)defaultExpressionConfiguration;
+(id)processIncomingExpressions:(id)arg1 previousExpressions:(id)arg2 expressionConfiguration:(id)arg3 startExpressionsOutSet:(id*)arg4 endExpressionsOutSet:(id*)arg5 ;
-(NSDictionary *)plistDictionary;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPlistDictionary:(id)arg1 ;
-(NSMutableDictionary *)_facialExpressionToSensitivity;
-(void)_safelySetSensitivity:(unsigned long long)arg1 forFacialExpression:(unsigned long long)arg2 inDictionary:(id)arg3 ;
-(BOOL)isEqualToMotionTrackingExpressionConfiguration:(id)arg1 ;
-(unsigned long long)sensitivityForFacialExpression:(unsigned long long)arg1 ;
-(void)setSensitivity:(unsigned long long)arg1 forFacialExpression:(unsigned long long)arg2 ;
-(void)set_facialExpressionToSensitivity:(NSMutableDictionary *)arg1 ;
@end

