/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

@class NSData;


@protocol SFDigestOperation <NSObject,NSCopying,NSSecureCoding>
@property (copy,readonly) NSData * hashValue; 
@required
+(long long)outputSize;
+(long long)blockSize;
+(id)digest:(id)arg1;
-(void)addData:(id)arg1;
-(NSData *)hashValue;

@end

