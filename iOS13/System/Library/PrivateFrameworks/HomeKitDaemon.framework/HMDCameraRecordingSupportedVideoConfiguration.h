/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMDCameraRecordingSupportedVideoConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	NSArray* _codecConfigurations;

}

@property (nonatomic,copy,readonly) NSArray * codecConfigurations;              //@synthesize codecConfigurations=_codecConfigurations - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSArray *)codecConfigurations;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(id)initWithCodecConfigurations:(id)arg1 ;
@end

