/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
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
-(id)init;
-(void)dealloc;
-(id)description;
-(id)propertyList;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(long long)contentLength;
-(void)setContentLength:(long long)arg1 ;
-(void)setByteRangeAccessSupported:(BOOL)arg1 ;
-(NSArray *)allowedContentTypes;
-(NSDate *)renewalDate;
-(id)initWithLoadingRequest:(id)arg1 allowedContentTypes:(id)arg2 ;
-(BOOL)isByteRangeAccessSupported;
-(BOOL)isDiskCachingPermitted;
-(void)setRenewalDate:(NSDate *)arg1 ;
-(void)setDiskCachingPermitted:(BOOL)arg1 ;
@end

