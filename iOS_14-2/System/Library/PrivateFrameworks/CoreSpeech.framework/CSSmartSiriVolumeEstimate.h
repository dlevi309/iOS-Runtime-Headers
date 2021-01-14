/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CSSmartSiriVolumeEstimate : NSObject <NSSecureCoding> {

	float _volumeEstimate;
	NSString* _debugLogPath;

}

@property (nonatomic,readonly) NSString * debugLogPath;              //@synthesize debugLogPath=_debugLogPath - In the implementation block
@property (nonatomic,readonly) float volumeEstimate;                 //@synthesize volumeEstimate=_volumeEstimate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)debugLogPath;
-(float)volumeEstimate;
-(id)initWithVolumeEstimate:(float)arg1 debugLogFile:(id)arg2 ;
@end

