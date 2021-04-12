/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface HMDCameraRecordingMediaContainerParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	NSNumber* _fragmentLength;

}

@property (nonatomic,copy,readonly) NSNumber * fragmentLength;              //@synthesize fragmentLength=_fragmentLength - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(NSNumber *)fragmentLength;
-(id)initWithFragmentLength:(id)arg1 ;
@end

