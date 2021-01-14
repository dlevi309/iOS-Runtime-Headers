/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSUUID;

@interface STUniquedManagedObject : NSManagedObject

@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSUUID * sortKey; 
-(id)dictionaryRepresentation;
-(void)awakeFromInsert;
-(id)computeUniqueIdentifier;
-(void)updateUniqueIdentifier;
@end

