/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface PAEKeyerAutokeySetup : NSObject <NSSecureCoding> {

	NSMutableArray* _initialSamples;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(id)initialSamples;
-(void)setInitialSamples:(id)arg1 ;
@end

