/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/

#import <AudioPasscode/AUPasscodeCodecConfiguration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NullCodecConfiguration : AUPasscodeCodecConfiguration <NSSecureCoding> {

	float _retrievalCallbackInterval;

}

@property (assign,nonatomic) float retrievalCallbackInterval;              //@synthesize retrievalCallbackInterval=_retrievalCallbackInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setDefaultValues;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)commandLineOptions;
-(id)initWithCommandLineArgs:(id)arg1 ;
-(float)retrievalCallbackInterval;
-(void)setRetrievalCallbackInterval:(float)arg1 ;
@end

