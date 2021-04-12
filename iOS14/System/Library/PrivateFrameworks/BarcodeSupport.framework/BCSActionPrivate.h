/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

@class NSDictionary, NSString, NSArray, CPSClipMetadataRequest;


@protocol BCSActionPrivate <BCSAction>
@property (nonatomic,copy,readonly) NSDictionary * debugDescriptionDictionary; 
@property (nonatomic,copy,readonly) NSString * extraPreviewText; 
@property (nonatomic,copy,readonly) NSArray * appLinks; 
@property (nonatomic,readonly) BOOL isInvalidDataAction; 
@property (nonatomic,readonly) BOOL isWiFiAction; 
@property (nonatomic,retain) CPSClipMetadataRequest * clipMetadataRequest; 
@required
-(NSArray *)appLinks;
-(NSString *)extraPreviewText;
-(NSDictionary *)debugDescriptionDictionary;
-(BOOL)isInvalidDataAction;
-(BOOL)isWiFiAction;
-(CPSClipMetadataRequest *)clipMetadataRequest;
-(void)setClipMetadataRequest:(id)arg1;

@end

