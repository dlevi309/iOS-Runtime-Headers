/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <CoreHAP/HAPNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface HMDVideoResolution : HAPNumberParser <NSSecureCoding, NSCopying> {

	NSNumber* _imageWidth;
	NSNumber* _imageHeight;
	unsigned long long _resolutionType;

}

@property (nonatomic,copy,readonly) NSNumber * imageWidth;                     //@synthesize imageWidth=_imageWidth - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * imageHeight;                    //@synthesize imageHeight=_imageHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long resolutionType;              //@synthesize resolutionType=_resolutionType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithResolutions:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSNumber *)imageWidth;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(unsigned long long)resolutionType;
-(NSNumber *)imageHeight;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTLVData:(id)arg1 ;
-(id)initWithResolution:(unsigned long long)arg1 ;
-(void)_extractWidthAndHeight;
@end

