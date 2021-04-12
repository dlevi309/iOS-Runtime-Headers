/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)metadata;
-(id)initWithDict:(id)arg1 ;
-(NSString *)templateType;
-(NSString *)lineItem;
-(NSString *)privacy;
-(NSString *)clientRequestID;
-(NSString *)algoID;
-(ADOdmlResponse *)odmlResponse;
-(NSString *)impressionID;
-(ADInstallAttributionData *)installAttribution;
@end

