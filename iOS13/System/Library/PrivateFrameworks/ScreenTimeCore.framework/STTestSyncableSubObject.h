/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/STSyncableSubObject.h>

@class NSString, STTestSyncableObject;

@interface STTestSyncableSubObject : NSManagedObject <STSyncableSubObject>

@property (assign,nonatomic) BOOL active; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain) STTestSyncableObject * root; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<STSerializableManagedObject> syncableRootObject; 
-(id<STSerializableManagedObject>)syncableRootObject;
@end

