/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class BRCStageRegistry, NSString, CKPackage;

@interface BRCLazyPackage : NSObject {

	BRCStageRegistry* _registry;
	NSString* _stageID;
	NSString* _name;
	CKPackage* _package;

}
-(unsigned long long)itemCount;
-(BOOL)addItem:(id)arg1 error:(id*)arg2 ;
-(id)initWithRegistry:(id)arg1 stageID:(id)arg2 name:(id)arg3 ;
-(id)closeAndReturn;
@end

