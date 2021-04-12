/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithBundle:(id)arg1 ;
-(BOOL)assetPacksBecameUnavailable:(id)arg1 error:(id*)arg2 ;
-(BOOL)assetPacksBecameAvailable:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(void)dealloc;
@end

