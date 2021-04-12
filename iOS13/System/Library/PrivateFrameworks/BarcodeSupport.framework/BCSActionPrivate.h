/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

@class NSDictionary, NSString, NSArray;


@protocol BCSActionPrivate <BCSAction>
@property (nonatomic,copy,readonly) NSDictionary * debugDescriptionDictionary; 
@property (nonatomic,copy,readonly) NSString * extraPreviewText; 
@property (nonatomic,copy,readonly) NSArray * appLinks; 
@property (nonatomic,readonly) BOOL isInvalidDataAction; 
@property (nonatomic,readonly) BOOL isWiFiAction; 
@required
-(NSArray *)appLinks;
-(NSString *)extraPreviewText;
-(NSDictionary *)debugDescriptionDictionary;
-(BOOL)isInvalidDataAction;
-(BOOL)isWiFiAction;

@end

