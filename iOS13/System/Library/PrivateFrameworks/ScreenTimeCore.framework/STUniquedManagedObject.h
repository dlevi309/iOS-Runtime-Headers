/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSUUID;

@interface STUniquedManagedObject : NSManagedObject

@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSUUID * sortKey; 
@property (copy,readonly) NSString * externalClassName; 
-(id)dictionaryRepresentation;
-(void)awakeFromInsert;
-(void)updateUniqueIdentifier;
-(NSString *)externalClassName;
-(id)computeUniqueIdentifier;
@end

