/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDatabaseResult.h>

@class NSString, NSSortDescriptor;

@interface WFRealmDatabaseResult : WFDatabaseResult {

	Class _objectClass;
	NSString* _predicateFormat;
	NSSortDescriptor* _sortDescriptor;

}

@property (nonatomic,readonly) Class objectClass;                                   //@synthesize objectClass=_objectClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * predicateFormat;                     //@synthesize predicateFormat=_predicateFormat - In the implementation block
@property (nonatomic,copy,readonly) NSSortDescriptor * sortDescriptor;              //@synthesize sortDescriptor=_sortDescriptor - In the implementation block
-(NSString *)predicateFormat;
-(Class)objectClass;
-(NSSortDescriptor *)sortDescriptor;
-(id)initWithBackingStore:(id)arg1 objectClass:(Class)arg2 predicateFormat:(id)arg3 sortDescriptor:(id)arg4 ;
-(void)notifyObserversAboutChange:(id)arg1 ;
@end

