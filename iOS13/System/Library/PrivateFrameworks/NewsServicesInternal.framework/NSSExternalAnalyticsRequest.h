/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSSExternalAnalyticsRequestMetadata;

@interface NSSExternalAnalyticsRequest : NSObject <NSSecureCoding> {

	NSURL* _URL;
	NSSExternalAnalyticsRequestMetadata* _metadata;

}

@property (nonatomic,copy,readonly) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSSExternalAnalyticsRequestMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(NSSExternalAnalyticsRequestMetadata *)metadata;
-(id)initWithURL:(id)arg1 metadata:(id)arg2 ;
@end

