/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadAllComponents:(AudioComponentVector*)arg1 ;
-(id)initWithPath:(id)arg1 priority:(int)arg2 ;
-(BOOL)refreshModificationDate;
-(void)bundlesChanged:(id)arg1 shouldRescan:(BOOL)arg2 ;
-(void)eventStreamCallback:(id)arg1 flags:(const unsigned*)arg2 ;
-(void)monitorDirectory;
-(void)scanDirectory;
-(id)scanBundle:(id)arg1 loadable:(BOOL)arg2 ;
@end

