/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/STSyncableSubObject.h>

@class NSString, STTestSyncableObject;

@interface STTestSyncableSubObject : NSManagedObject <STSyncableSubObject>

@property (assign,nonatomic) BOOL active; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) STTestSyncableObject * root; 
@property (readonly) id<STSerializableManagedObject> syncableRootObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<STSerializableManagedObject>)syncableRootObject;
@end

