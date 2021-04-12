/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVDescription.h>

@interface HMDNumberParser : HMDTLVDescription {

	unsigned long long _decodedNumber;

}

@property (nonatomic,readonly) unsigned long long decodedNumber;              //@synthesize decodedNumber=_decodedNumber - In the implementation block
-(id)initWithTLVData:(id)arg1 ;
-(unsigned long long)decodedNumber;
@end

