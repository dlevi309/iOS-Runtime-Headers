/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <libobjc.A.dylib/CKTransactionalComponentDataSourceStateModifying.h>

@protocol CKComponentStateListener;
@class NSDictionary, CKTransactionalComponentDataSourceChangeset, NSString;

@interface CKTransactionalComponentDataSourceChangesetModification : NSObject <CKTransactionalComponentDataSourceStateModifying> {

	id<CKComponentStateListener> _stateListener;
	NSDictionary* _userInfo;
	CKTransactionalComponentDataSourceChangeset* _changeset;

}

@property (nonatomic,readonly) CKTransactionalComponentDataSourceChangeset * changeset;              //@synthesize changeset=_changeset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)changeFromState:(id)arg1 ;
-(id)initWithChangeset:(id)arg1 stateListener:(id)arg2 userInfo:(id)arg3 ;
-(CKTransactionalComponentDataSourceChangeset *)changeset;
@end

