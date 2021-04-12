/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

#import <PromotedContent/PromotedContent-Structs.h>
#import <PromotedContent/APPCContentRepresentation.h>

@class NSString;

@interface APPCNativeRepresentation : APPCContentRepresentation {

	 articleID;
	 articleTitle;
	 advertiserName;
	 campaignData;

}

@property (readonly,nonatomic) NSString * articleID; 
@property (readonly,nonatomic) NSString * articleTitle; 
@property (readonly,nonatomic) NSString * advertiserName; 
@property (readonly,nonatomic) NSString * campaignData; 
-(NSString *)articleID;
-(NSString *)campaignData;
-(NSString *)articleTitle;
-(NSString *)advertiserName;
-(id)initWithIdentifier:(id)arg1 adType:(long long)arg2 desiredPosition:(long long)arg3 privacyMarkerPosition:(long long)arg4 articleID:(id)arg5 articleTitle:(id)arg6 adSponsor:(id)arg7 campaignData:(id)arg8 adSize:(CGSize)arg9 ;
@end

