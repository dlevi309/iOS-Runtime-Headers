/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setMetadata:(SKUIReportAConcernMetadata *)arg1 ;
-(SKUIReportAConcernMetadata *)metadata;
-(NSDictionary *)responseDictionary;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(id)initWithMetadata:(id)arg1 ;
-(id)_httpBody;
@end

