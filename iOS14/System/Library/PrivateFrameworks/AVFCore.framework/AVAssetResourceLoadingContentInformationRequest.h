/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class AVAssetResourceLoadingContentInformationRequestInternal, NSString, NSArray, NSDate;

@interface AVAssetResourceLoadingContentInformationRequest : NSObject {

	AVAssetResourceLoadingContentInformationRequestInternal* _contentInformationRequest;

}

@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,readonly) NSArray * allowedContentTypes; 
@property (assign,nonatomic) long long contentLength; 
@property (assign,getter=isByteRangeAccessSupported,nonatomic) BOOL byteRangeAccessSupported; 
@property (nonatomic,copy) NSDate * renewalDate; 
-(long long)contentLength;
-(id)init;
-(NSString *)contentType;
-(id)description;
-(NSDate *)renewalDate;
-(id)initWithLoadingRequest:(id)arg1 allowedContentTypes:(id)arg2 ;
-(BOOL)isByteRangeAccessSupported;
-(BOOL)isDiskCachingPermitted;
-(void)setContentLength:(long long)arg1 ;
-(void)setByteRangeAccessSupported:(BOOL)arg1 ;
-(void)setRenewalDate:(NSDate *)arg1 ;
-(void)setDiskCachingPermitted:(BOOL)arg1 ;
-(void)setEntireLengthAvailableOnDemand:(BOOL)arg1 ;
-(BOOL)isEntireLengthAvailableOnDemand;
-(NSArray *)allowedContentTypes;
-(void)setContentType:(NSString *)arg1 ;
-(id)propertyList;
-(void)dealloc;
@end

