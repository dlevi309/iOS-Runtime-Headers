/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSMutableDictionary, NSLock, NSBundle;

@interface _NSBundleODRDataCommon : NSObject {

	NSMutableDictionary* _assetPackToURL;
	NSLock* _lock;
	NSBundle* _bundle;
	long long _sandboxToken;

}
-(id)initWithBundle:(id)arg1 ;
-(BOOL)assetPacksBecameUnavailable:(id)arg1 error:(id*)arg2 ;
-(BOOL)assetPacksBecameAvailable:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

