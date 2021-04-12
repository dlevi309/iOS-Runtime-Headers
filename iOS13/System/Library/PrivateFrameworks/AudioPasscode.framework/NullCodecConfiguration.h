/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/

#import <AudioPasscode/AUPasscodeCodecConfiguration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NullCodecConfiguration : AUPasscodeCodecConfiguration <NSSecureCoding> {

	float _retrievalCallbackInterval;

}

@property (assign,nonatomic) float retrievalCallbackInterval;              //@synthesize retrievalCallbackInterval=_retrievalCallbackInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDefaultValues;
-(id)commandLineOptions;
-(id)initWithCommandLineArgs:(id)arg1 ;
-(float)retrievalCallbackInterval;
-(void)setRetrievalCallbackInterval:(float)arg1 ;
@end

