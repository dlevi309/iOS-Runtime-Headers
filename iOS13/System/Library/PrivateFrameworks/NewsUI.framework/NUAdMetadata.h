/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/SXPrerollAdMetadata.h>

@class NSString;

@interface NUAdMetadata : NSObject <SXPrerollAdMetadata> {

	NSString* _adImpressionIdentifier;
	NSString* _adCampaignId;
	NSString* _adLineId;
	NSString* _adCreativeId;

}

@property (nonatomic,readonly) NSString * adImpressionIdentifier;              //@synthesize adImpressionIdentifier=_adImpressionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * adCampaignId;                        //@synthesize adCampaignId=_adCampaignId - In the implementation block
@property (nonatomic,readonly) NSString * adLineId;                            //@synthesize adLineId=_adLineId - In the implementation block
@property (nonatomic,readonly) NSString * adCreativeId;                        //@synthesize adCreativeId=_adCreativeId - In the implementation block
-(NSString *)adCreativeId;
-(NSString *)adImpressionIdentifier;
-(NSString *)adCampaignId;
-(NSString *)adLineId;
-(id)initWithAdImpressionIdentifier:(id)arg1 adCampaignId:(id)arg2 adLineId:(id)arg3 adCreativeId:(id)arg4 ;
@end

