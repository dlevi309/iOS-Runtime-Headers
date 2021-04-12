/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
*/


#import <IntentsCore/IntentsCore-Structs.h>
@class LSApplicationWorkspace, NSMutableDictionary;

@interface INCExecutionCounterpartMapper : NSObject {

	BOOL _filled;
	os_unfair_lock_s _lock;
	LSApplicationWorkspace* _workspace;
	NSMutableDictionary* _mapping;

}

@property (nonatomic,copy,readonly) NSMutableDictionary * _mapping;              //@synthesize mapping=_mapping - In the implementation block
@property (nonatomic,readonly) BOOL _filled;                                     //@synthesize filled=_filled - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s _lock;                           //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) LSApplicationWorkspace * workspace;               //@synthesize workspace=_workspace - In the implementation block
-(id)init;
-(void)dealloc;
-(os_unfair_lock_s)_lock;
-(void)reset;
-(NSMutableDictionary *)_mapping;
-(LSApplicationWorkspace *)workspace;
-(BOOL)_filled;
-(id)initWithWorkspace:(id)arg1 ;
-(void)installedApplicationsDidChange:(id)arg1 ;
-(id)counterpartBundleIdentifiersForBundleIdentifier:(id)arg1 ;
@end

