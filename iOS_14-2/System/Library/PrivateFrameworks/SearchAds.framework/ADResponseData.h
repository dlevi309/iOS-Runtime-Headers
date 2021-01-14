/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
*/


@class NSString, NSDictionary, ADInstallAttributionData, ADOdmlResponse;

@interface ADResponseData : NSObject {

	NSString* _impressionID;
	NSString* _metadata;
	NSString* _lineItem;
	NSString* _algoID;
	NSString* _privacy;
	NSString* _templateType;
	NSString* _clientRequestID;
	NSDictionary* _format;
	ADInstallAttributionData* _installAttribution;
	ADOdmlResponse* _odmlResponse;

}

@property (nonatomic,copy,readonly) NSString * impressionID;                                    //@synthesize impressionID=_impressionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * metadata;                                        //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * lineItem;                                        //@synthesize lineItem=_lineItem - In the implementation block
@property (nonatomic,copy,readonly) NSString * algoID;                                          //@synthesize algoID=_algoID - In the implementation block
@property (nonatomic,copy,readonly) NSString * privacy;                                         //@synthesize privacy=_privacy - In the implementation block
@property (nonatomic,copy,readonly) NSString * templateType;                                    //@synthesize templateType=_templateType - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientRequestID;                                 //@synthesize clientRequestID=_clientRequestID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * format;                                      //@synthesize format=_format - In the implementation block
@property (nonatomic,copy,readonly) ADInstallAttributionData * installAttribution;              //@synthesize installAttribution=_installAttribution - In the implementation block
@property (nonatomic,copy,readonly) ADOdmlResponse * odmlResponse;                              //@synthesize odmlResponse=_odmlResponse - In the implementation block
-(NSDictionary *)format;
-(NSString *)algoID;
-(NSString *)privacy;
-(NSString *)templateType;
-(NSString *)lineItem;
-(NSString *)metadata;
-(NSString *)clientRequestID;
-(id)initWithDict:(id)arg1 ;
-(ADOdmlResponse *)odmlResponse;
-(NSString *)impressionID;
-(ADInstallAttributionData *)installAttribution;
@end

