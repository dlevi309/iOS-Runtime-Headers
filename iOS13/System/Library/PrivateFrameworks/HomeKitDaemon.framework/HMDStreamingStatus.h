/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDStreamingStatus : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	unsigned long long _streamingStatus;

}

@property (nonatomic,readonly) unsigned long long streamingStatus;              //@synthesize streamingStatus=_streamingStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(unsigned long long)streamingStatus;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
@end

