/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface PAEKeyerAutokeySetup : NSObject <NSSecureCoding> {

	NSMutableArray* _initialSamples;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(id)initialSamples;
-(void)setInitialSamples:(id)arg1 ;
@end

