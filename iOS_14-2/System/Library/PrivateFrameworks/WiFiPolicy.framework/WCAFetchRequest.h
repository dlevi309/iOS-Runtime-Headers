/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WCAAsset;

@interface WCAFetchRequest : NSObject <NSSecureCoding> {

	/*^block*/id _completionHandler;
	WCAAsset* _asset;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) WCAAsset * asset;                //@synthesize asset=_asset - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAsset:(WCAAsset *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(WCAAsset *)asset;
-(void)encodeWithCoder:(id)arg1 ;
-(id)completionHandler;
-(id)initWithCoder:(id)arg1 ;
@end

