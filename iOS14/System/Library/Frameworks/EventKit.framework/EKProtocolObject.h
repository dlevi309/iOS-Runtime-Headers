/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

@class NSDictionary;


@protocol EKProtocolObject <NSObject>
@property (nonatomic,readonly) BOOL canBeConvertedToFullObject; 
@property (nonatomic,readonly) BOOL isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@required
+(id)propertiesUnavailableForPartialObjects;
-(BOOL)isNew;
-(BOOL)isPropertyUnavailable:(id)arg1;
-(BOOL)isPartialObject;
-(BOOL)canBeConvertedToFullObject;
-(NSDictionary *)preFrozenRelationshipObjects;
-(BOOL)isFrozen;

@end

