/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

@class NSDictionary;


@protocol EKProtocolObject <NSObject>
@property (nonatomic,readonly) BOOL canBeConvertedToFullObject; 
@property (nonatomic,readonly) BOOL isPartialObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
@required
+(id)propertiesUnavailableForPartialObjects;
-(BOOL)isFrozen;
-(BOOL)isNew;
-(BOOL)isPartialObject;
-(BOOL)canBeConvertedToFullObject;
-(BOOL)isPropertyUnavailable:(id)arg1;
-(NSDictionary *)preFrozenRelationshipObjects;

@end

