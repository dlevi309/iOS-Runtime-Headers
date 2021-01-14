/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BMStoreData.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>

@protocol NSSecureCodingATXProtoBufWrapper;
@class NSObject, NSString;

@interface ATXUIEvent : NSObject <NSSecureCoding, BMStoreData, ATXProtoBufWrapper> {

	unsigned char _consumerSubType;
	NSObject*<NSSecureCoding>*<ATXProtoBufWrapper> _event;

}

@property (nonatomic,readonly) unsigned char consumerSubType;                                     //@synthesize consumerSubType=_consumerSubType - In the implementation block
@property (nonatomic,readonly) NSObject*<NSSecureCoding>*<ATXProtoBufWrapper> event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) unsigned dataVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
+(id)uiEventWithHomeScreenEvent:(id)arg1 ;
+(id)uiEventWithSpotlightEvent:(id)arg1 ;
+(id)uiEventWithAppDirectoryEvent:(id)arg1 ;
-(id)jsonDict;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(unsigned)dataVersion;
-(id)serialize;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(unsigned char)consumerSubType;
-(id)json;
-(id)proto;
-(id)init;
-(id)encodeAsProto;
-(void)encodeWithCoder:(id)arg1 ;
-(NSObject*<NSSecureCoding>*<ATXProtoBufWrapper>)event;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithConsumerSubType:(unsigned char)arg1 event:(id)arg2 ;
-(id)_jsonDictForATXHomeScreenEvent:(id)arg1 ;
-(id)_jsonDictForATXSpotlightEvent:(id)arg1 ;
-(id)_jsonDictForATXAppDirectoryEvent:(id)arg1 ;
-(BOOL)isEqualToATXUIEvent:(id)arg1 ;
-(id)homeScreenEvent;
-(id)spotlightEvent;
-(id)appDirectoryEvent;
@end

