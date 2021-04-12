/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary;

@interface WBSSiteMetadataRequest : NSObject <NSCopying> {

	NSURL* _url;
	NSDictionary* _extraInfo;

}

@property (nonatomic,readonly) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraInfo;              //@synthesize extraInfo=_extraInfo - In the implementation block
-(id)init;
-(NSURL *)url;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)extraInfo;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithURL:(id)arg1 extraInfo:(id)arg2 ;
@end

