/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RCUserSegmentationConfiguration : NSObject <NSSecureCoding> {

	unsigned long long _foregroundRefreshRate;
	unsigned long long _backgroundRefreshRate;
	unsigned long long _modThreshold;
	unsigned long long _modMax;
	NSString* _endpointURLString;

}

@property (nonatomic,readonly) unsigned long long foregroundRefreshRate;              //@synthesize foregroundRefreshRate=_foregroundRefreshRate - In the implementation block
@property (nonatomic,readonly) unsigned long long backgroundRefreshRate;              //@synthesize backgroundRefreshRate=_backgroundRefreshRate - In the implementation block
@property (nonatomic,readonly) unsigned long long modThreshold;                       //@synthesize modThreshold=_modThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long modMax;                             //@synthesize modMax=_modMax - In the implementation block
@property (nonatomic,copy,readonly) NSString * endpointURLString;                     //@synthesize endpointURLString=_endpointURLString - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
+(id)userSegmentationConfigurationWithConfigDict:(id)arg1 environment:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithForegroundRefreshRate:(unsigned long long)arg1 backgroundRefreshRate:(unsigned long long)arg2 modThreshold:(unsigned long long)arg3 modMax:(unsigned long long)arg4 endpointURLString:(id)arg5 ;
-(unsigned long long)foregroundRefreshRate;
-(unsigned long long)backgroundRefreshRate;
-(unsigned long long)modThreshold;
-(unsigned long long)modMax;
-(NSString *)endpointURLString;
@end

