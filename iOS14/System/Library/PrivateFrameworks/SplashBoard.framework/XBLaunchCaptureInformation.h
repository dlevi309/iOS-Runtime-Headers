/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface XBLaunchCaptureInformation : NSObject <NSSecureCoding> {

	unsigned long long _estimatedMemoryImpact;
	NSString* _caarFilePath;

}

@property (assign,nonatomic) unsigned long long estimatedMemoryImpact;              //@synthesize estimatedMemoryImpact=_estimatedMemoryImpact - In the implementation block
@property (nonatomic,copy) NSString * caarFilePath;                                 //@synthesize caarFilePath=_caarFilePath - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)estimatedMemoryImpact;
-(void)setEstimatedMemoryImpact:(unsigned long long)arg1 ;
-(NSString *)caarFilePath;
-(void)setCaarFilePath:(NSString *)arg1 ;
@end

