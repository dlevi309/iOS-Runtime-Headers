/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSData;

@interface _ACPluginDB : NSObject <NSSecureCoding> {

	NSMutableDictionary* mSearchDirectories;
	BOOL mDirty;
	NSObject*<OS_dispatch_queue> mDispatchQueue;
	function<void (AudioComponentVector &, AudioComponentVector &)>* mNotificationCallback;
	function<void ()>* mScanHashCallback;
	NSData* mCarbonComponentHash;

}
+(BOOL)supportsSecureCoding;
+(id)path;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)writeIfDirty;
-(void)initialScanDirectory:(id)arg1 priority:(int)arg2 components:(AudioComponentVector*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(AudioComponentVector*)postInit:(BOOL)arg1 ;
@end

