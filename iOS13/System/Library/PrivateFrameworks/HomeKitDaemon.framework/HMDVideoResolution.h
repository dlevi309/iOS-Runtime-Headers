/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface HMDVideoResolution : HMDNumberParser <NSSecureCoding, NSCopying> {

	NSNumber* _imageWidth;
	NSNumber* _imageHeight;
	unsigned long long _resolutionType;

}

@property (nonatomic,copy,readonly) NSNumber * imageWidth;                     //@synthesize imageWidth=_imageWidth - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * imageHeight;                    //@synthesize imageHeight=_imageHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long resolutionType;              //@synthesize resolutionType=_resolutionType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithResolutions:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSNumber *)imageHeight;
-(NSNumber *)imageWidth;
-(unsigned long long)resolutionType;
-(id)initWithTLVData:(id)arg1 ;
-(id)initWithResolution:(unsigned long long)arg1 ;
-(void)_extractWidthAndHeight;
@end

