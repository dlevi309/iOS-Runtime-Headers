/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDH264Level : HMDNumberParser <NSSecureCoding> {

	unsigned long long _h264Level;

}

@property (nonatomic,readonly) unsigned long long h264Level;              //@synthesize h264Level=_h264Level - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithLevels:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)initWithTLVData:(id)arg1 ;
-(unsigned long long)h264Level;
-(id)initWithH264Level:(unsigned long long)arg1 ;
@end

