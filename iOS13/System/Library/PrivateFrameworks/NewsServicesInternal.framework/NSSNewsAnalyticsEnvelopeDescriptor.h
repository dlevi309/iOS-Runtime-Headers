/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
*/

#import <NewsServicesInternal/NewsServicesInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSSNewsAnalyticsEnvelopeDescriptor : NSObject <NSCopying> {

	int _contentType;
	int _contentTypeVersion;
	int _contentTypeMinorVersion;
	int _contentTypePatchVersion;

}

@property (nonatomic,readonly) int contentType;                          //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) int contentTypeVersion;                   //@synthesize contentTypeVersion=_contentTypeVersion - In the implementation block
@property (nonatomic,readonly) int contentTypeMinorVersion;              //@synthesize contentTypeMinorVersion=_contentTypeMinorVersion - In the implementation block
@property (nonatomic,readonly) int contentTypePatchVersion;              //@synthesize contentTypePatchVersion=_contentTypePatchVersion - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)contentType;
-(int)contentTypeVersion;
-(int)contentTypeMinorVersion;
-(int)contentTypePatchVersion;
-(id)initWithContentType:(int)arg1 contentTypeVersion:(int)arg2 contentTypeMinorVersion:(int)arg3 contentTypePatchVersion:(int)arg4 ;
@end

