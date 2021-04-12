/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/_NSBundleODRDataCommon.h>

@protocol OS_dispatch_group;
@class NSDictionary, NSMutableSet, NSError, NSObject, NSString;

@interface _NSBundleODRDataForApplications : _NSBundleODRDataCommon {

	NSDictionary* _tagToTagState;
	NSMutableSet* _extensionConnections;
	NSError* _stashedError;
	NSObject*<OS_dispatch_group> _initialStateGroup;
	NSString* _rootSandboxPath;

}
+(id)dataForBundle:(id)arg1 createIfRequired:(BOOL)arg2 ;
+(void)_flushCacheForBundle:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithBundle:(id)arg1 ;
-(BOOL)assetPacksBecameAvailable:(id)arg1 error:(id*)arg2 ;
-(BOOL)assetPacksBecameUnavailable:(id)arg1 error:(id*)arg2 ;
-(BOOL)_waitForDaemon;
-(void)addExtensionEndpoint:(id)arg1 ;
-(double)preservationPriorityForTag:(id)arg1 ;
-(void)setPreservationPriority:(double)arg1 forTags:(id)arg2 ;
-(id)stashedError;
@end

