/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <iTunesStore/ISOperation.h>

@class NSDictionary, SKUIReportAConcernMetadata;

@interface SKUIReportAConcernOperation : ISOperation {

	NSDictionary* _responseDictionary;
	SKUIReportAConcernMetadata* _metadata;

}

@property (nonatomic,retain) SKUIReportAConcernMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (copy) NSDictionary * responseDictionary;                              //@synthesize responseDictionary=_responseDictionary - In the implementation block
-(void)run;
-(id)initWithMetadata:(id)arg1 ;
-(NSDictionary *)responseDictionary;
-(void)setMetadata:(SKUIReportAConcernMetadata *)arg1 ;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(SKUIReportAConcernMetadata *)metadata;
-(id)_httpBody;
@end

