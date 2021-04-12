/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

@class NSString;


@protocol EKFrozenMeltedPair <NSObject>
@property (nonatomic,readonly) BOOL isFrozen; 
@property (nonatomic,readonly) BOOL isPartialObject; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * semanticIdentifier; 
@required
+(Class)frozenClass;
+(Class)meltedClass;
-(void)setValue:(id)arg1 forKey:(id)arg2;
-(id)initWithObject:(id)arg1;
-(id)valueForKey:(id)arg1;
-(NSString *)uniqueIdentifier;
-(id)changeSet;
-(BOOL)isFrozen;
-(BOOL)isPartialObject;
-(Class)frozenClass;
-(id)meltedObjectInStore:(id)arg1;
-(id)frozenObject;
-(id)existingMeltedObject;
-(BOOL)isPropertyUnavailable:(id)arg1;
-(BOOL)isCompletelyEqual:(id)arg1;
-(BOOL)isEqual:(id)arg1 ignoringProperties:(id)arg2;
-(NSString *)semanticIdentifier;

@end

