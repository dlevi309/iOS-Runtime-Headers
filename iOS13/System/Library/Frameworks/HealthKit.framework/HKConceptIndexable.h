/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

