/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

@class NSString;


@protocol EKFrozenMeltedPair <NSObject>
@property (nonatomic,readonly) BOOL isFrozen; 
@property (nonatomic,readonly) BOOL isPartialObject; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * semanticIdentifier; 
@required
+(Class)meltedClass;
+(Class)frozenClass;
-(id)changeSet;
-(id)initWithObject:(id)arg1;
-(NSString *)semanticIdentifier;
-(void)setValue:(id)arg1 forKey:(id)arg2;
-(id)valueForKey:(id)arg1;
-(NSString *)uniqueIdentifier;
-(BOOL)isPropertyUnavailable:(id)arg1;
-(BOOL)isEqual:(id)arg1 ignoringProperties:(id)arg2;
-(id)frozenObject;
-(id)existingMeltedObject;
-(BOOL)isCompletelyEqual:(id)arg1;
-(BOOL)isPartialObject;
-(id)meltedObjectInStore:(id)arg1;
-(Class)frozenClass;
-(BOOL)isFrozen;

@end

