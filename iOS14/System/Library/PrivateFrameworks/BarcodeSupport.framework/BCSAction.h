/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <libobjc.A.dylib/BCSActionPrivate.h>

@protocol BCSActionDelegate, BCSParsedDataPrivate, BCSCodePayload;
@class NSDictionary, NSString, NSArray, CPSClipMetadataRequest, BCSActionPickerViewAssistant, NSURL;

@interface BCSAction : NSObject <BCSActionPrivate> {

	BCSActionPickerViewAssistant* _actionPickerViewAssistant;
	BOOL isInvalidDataAction;
	BOOL isWiFiAction;
	id<BCSActionDelegate> delegate;
	NSURL* urlThatCanBeOpened;
	NSArray* appLinks;
	CPSClipMetadataRequest* clipMetadataRequest;
	id<BCSParsedDataPrivate> _data;
	NSURL* _url;
	id<BCSCodePayload> _codePayload;

}

@property (nonatomic,readonly) id<BCSParsedDataPrivate> data;                                               //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) id<BCSCodePayload> codePayload;                                              //@synthesize codePayload=_codePayload - In the implementation block
@property (nonatomic,readonly) long long codeType; 
@property (nonatomic,copy,readonly) NSDictionary * debugDescriptionDictionary; 
@property (nonatomic,copy,readonly) NSString * extraPreviewText; 
@property (nonatomic,copy,readonly) NSArray * appLinks; 
@property (nonatomic,readonly) BOOL isInvalidDataAction; 
@property (nonatomic,readonly) BOOL isWiFiAction; 
@property (nonatomic,retain) CPSClipMetadataRequest * clipMetadataRequest; 
@property (assign,nonatomic,__weak) id<BCSActionDelegate> delegate; 
@property (nonatomic,readonly) NSURL * urlThatCanBeOpened; 
@property (nonatomic,copy,readonly) NSString * defaultActionTargetApplicationBundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * localizedDefaultActionTitle; 
@property (nonatomic,copy,readonly) NSString * localizedDefaultActionDescription; 
@property (nonatomic,copy,readonly) NSString * localizedActionDescription; 
@property (nonatomic,copy,readonly) NSArray * actionPickerItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)getActionWithData:(id)arg1 codePayload:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<BCSActionDelegate>)delegate;
-(void)performAction;
-(long long)codeType;
-(NSArray *)actionPickerItems;
-(NSString *)localizedDefaultActionDescription;
-(NSString *)defaultActionTargetApplicationBundleIdentifier;
-(NSURL *)url;
-(void)setDelegate:(id<BCSActionDelegate>)arg1 ;
-(id<BCSParsedDataPrivate>)data;
-(long long)type;
-(void)performDefaultAction;
-(NSArray *)appLinks;
-(NSURL *)urlThatCanBeOpened;
-(id)initWithData:(id)arg1 codePayload:(id)arg2 ;
-(void)determineActionabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)localizedActionDescription;
-(id)debugDescriptionExtraInfoDictionary;
-(NSString *)extraPreviewText;
-(void)showActionPicker;
-(NSString *)localizedDefaultActionTitle;
-(NSDictionary *)debugDescriptionDictionary;
-(BOOL)isInvalidDataAction;
-(BOOL)isWiFiAction;
-(CPSClipMetadataRequest *)clipMetadataRequest;
-(void)setClipMetadataRequest:(CPSClipMetadataRequest *)arg1 ;
-(id<BCSCodePayload>)codePayload;
@end

