/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface TRISignedAssetURL : NSObject <NSCopying> {

	NSURL* _url;
	NSString* _signature;

}

@property (nonatomic,readonly) NSURL * url;                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * signature;              //@synthesize signature=_signature - In the implementation block
+(id)assetURLWithUrl:(id)arg1 signature:(id)arg2 ;
-(NSString *)signature;
-(id)init;
-(NSURL *)url;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUrl:(id)arg1 signature:(id)arg2 ;
-(BOOL)isEqualToAssetURL:(id)arg1 ;
-(id)copyWithReplacementUrl:(id)arg1 ;
-(id)copyWithReplacementSignature:(id)arg1 ;
@end

