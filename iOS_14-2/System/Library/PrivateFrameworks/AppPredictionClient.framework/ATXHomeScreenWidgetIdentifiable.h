/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>
#import <libobjc.A.dylib/ATXMemoryPressureObserver.h>

@class NSData, INIntent, ATXMemoryPressureMonitor, NSString;

@interface ATXHomeScreenWidgetIdentifiable : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXMemoryPressureObserver> {

	NSData* _intentProtoData;
	INIntent* _intent;
	ATXMemoryPressureMonitor* _memoryPressureMonitor;
	NSString* _extensionBundleId;
	NSString* _widgetKind;
	unsigned long long _size;
	NSString* _appBundleId;
	NSString* _widgetUniqueId;

}

@property (nonatomic,copy) NSString * extensionBundleId;              //@synthesize extensionBundleId=_extensionBundleId - In the implementation block
@property (nonatomic,copy) NSString * widgetKind;                     //@synthesize widgetKind=_widgetKind - In the implementation block
@property (assign,nonatomic) unsigned long long size;                 //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSString * appBundleId;                    //@synthesize appBundleId=_appBundleId - In the implementation block
@property (nonatomic,retain) INIntent * intent; 
@property (nonatomic,copy) NSString * widgetUniqueId;                 //@synthesize widgetUniqueId=_widgetUniqueId - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)extensionBundleId;
-(id)initWithProto:(id)arg1 ;
-(INIntent *)intent;
-(id)initWithProtoData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initFromDictionaryRepresentation:(id)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)compactDescription;
-(id)proto;
-(NSString *)widgetKind;
-(void)setAppBundleId:(NSString *)arg1 ;
-(id)init;
-(id)encodeAsProto;
-(NSString *)appBundleId;
-(id)initWithMemoryPressureMonitor:(id)arg1 ;
-(void)setWidgetUniqueId:(NSString *)arg1 ;
-(unsigned long long)size;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setExtensionBundleId:(NSString *)arg1 ;
-(void)setIntent:(INIntent *)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(BOOL)isSameWidgetAsWidgetBundleId:(id)arg1 widgetKind:(id)arg2 ;
-(id)description;
-(void)setWidgetKind:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)_dictionaryRepresentationIncludingFullIntent:(BOOL)arg1 ;
-(void)handleMemoryPressure;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSString *)widgetUniqueId;
@end

