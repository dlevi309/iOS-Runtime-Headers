/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

@class NSData;


@protocol SFDigestOperation <NSObject,NSCopying,NSSecureCoding>
@property (copy,readonly) NSData * hashValue; 
@required
+(long long)blockSize;
+(id)digest:(id)arg1;
+(long long)outputSize;
-(void)addData:(id)arg1;
-(NSData *)hashValue;

@end

