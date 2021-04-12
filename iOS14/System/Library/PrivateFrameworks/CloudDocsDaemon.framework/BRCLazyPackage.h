/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

