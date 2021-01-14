/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

@class NSUUID, NSLocale, NSString;


@protocol HKConceptIndexable <HKCodedObject>
@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@required
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
-(NSLocale *)locale;
-(NSUUID *)UUID;
-(NSString *)country;

@end

