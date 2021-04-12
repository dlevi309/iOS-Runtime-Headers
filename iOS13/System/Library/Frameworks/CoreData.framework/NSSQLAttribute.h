/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLColumn.h>

@class NSSet;

@interface NSSQLAttribute : NSSQLColumn

@property (nonatomic,readonly) NSSet * triggerKeys; 
-(void)dealloc;
-(BOOL)isFileBackedFuture;
-(id)attributeDescription;
-(void)_setIsBackedByTrigger:(BOOL)arg1 ;
-(void)addKeyForTriggerOnRelationship:(id)arg1 ;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(unsigned char)_sqlTypeForAttributeType:(unsigned long long)arg1 flags:(unsigned long long)arg2 ;
-(NSSet *)triggerKeys;
-(id)initForReadOnlyFetchWithExpression:(id)arg1 ;
-(BOOL)shouldIndex;
-(BOOL)isDerivedAttribute;
-(BOOL)isBackedByTrigger;
@end

