/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

#import <PromotedContent/PromotedContent-Structs.h>
#import <PromotedContent/APPCContentRepresentation.h>

@class NSString, APPCOutstreamVideoInfo;

@interface APPCBannerRepresentation : APPCContentRepresentation {

	 adTag;
	 outstreamVideoInfo;

}

@property (readonly,nonatomic) NSString * adTag; 
@property (readonly,nonatomic) APPCOutstreamVideoInfo * outstreamVideoInfo; 
-(NSString *)adTag;
-(APPCOutstreamVideoInfo *)outstreamVideoInfo;
-(id)initWithIdentifier:(id)arg1 adType:(long long)arg2 desiredPosition:(long long)arg3 privacyMarkerPosition:(long long)arg4 adSize:(CGSize)arg5 tapAction:(id)arg6 adTag:(id)arg7 outstreamVideoInfo:(id)arg8 ;
@end

