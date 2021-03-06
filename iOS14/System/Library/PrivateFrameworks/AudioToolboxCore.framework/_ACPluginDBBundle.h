/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _ACPluginDBBundle : NSObject <NSSecureCoding> {

	NSString* mFullPath;
	double mInfoPlistModDate;
	double mRsrcModDate;
	AudioComponentVector* mBundleComponentVector;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPath:(id)arg1 infoPlistModDate:(double)arg2 rsrcModDate:(double)arg3 ;
-(void)loadAllComponents:(AudioComponentVector*)arg1 ;
-(void)scanWithPriority:(int)arg1 loadable:(BOOL)arg2 infoPlistPath:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
@end

