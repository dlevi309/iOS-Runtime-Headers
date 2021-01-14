/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _ACPluginDB, NSString, NSMutableDictionary, NSData, NSMutableArray;

@interface _ACPluginDBDirectory : NSObject <NSSecureCoding> {

	_ACPluginDB* mDB;
	NSString* mFullPath;
	double mModificationDate;
	int mPriority;
	NSMutableDictionary* mBundlesByName;
	FSEventStreamRef mFSMonitor;
	double mCurrentModificationDate;
	NSData* mCarbonComponentHash;
	BOOL mComponentsLoadable;
	NSMutableArray* mChangedBundlePaths;
	unsigned long long mNrOfPathsChanged;
	BOOL mShouldRescan;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)loadAllComponents:(AudioComponentVector*)arg1 ;
-(id)initWithPath:(id)arg1 priority:(int)arg2 ;
-(BOOL)refreshModificationDate;
-(void)bundlesChanged:(id)arg1 shouldRescan:(BOOL)arg2 ;
-(void)eventStreamCallback:(id)arg1 flags:(const unsigned*)arg2 ;
-(void)scanDirectory;
-(void)monitorDirectory;
-(id)scanBundle:(id)arg1 loadable:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

