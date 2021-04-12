/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLColumn.h>

@class NSSet;

@interface NSSQLAttribute : NSSQLColumn

@property (nonatomic,readonly) NSSet * triggerKeys; 
-(BOOL)isFileBackedFuture;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(id)attributeDescription;
-(NSSet *)triggerKeys;
-(void)_setIsBackedByTrigger:(BOOL)arg1 ;
-(BOOL)isBackedByTrigger;
-(unsigned char)_sqlTypeForAttributeType:(unsigned long long)arg1 flags:(unsigned long long)arg2 ;
-(BOOL)isDerivedAttribute;
-(BOOL)shouldIndex;
-(id)initForReadOnlyFetchWithExpression:(id)arg1 ;
-(void)dealloc;
-(void)addKeyForTriggerOnRelationship:(id)arg1 ;
@end

