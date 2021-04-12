/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAP2LoggingObject.h>

@protocol HAP2AccessoryServerTransportRequestEndpoint;
@class NSString, NSData;

@interface HAP2AccessoryServerTransportRequest : HAP2LoggingObject {

	BOOL _forReading;
	BOOL _encrypted;
	id<HAP2AccessoryServerTransportRequestEndpoint> _endpoint;
	NSString* _mimeType;
	NSData* _data;
	unsigned long long _identifier;

}

@property (nonatomic,readonly) id<HAP2AccessoryServerTransportRequestEndpoint> endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (getter=isForReading,nonatomic,readonly) BOOL forReading;                                   //@synthesize forReading=_forReading - In the implementation block
@property (getter=isForWriting,nonatomic,readonly) BOOL forWriting; 
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted;                                     //@synthesize encrypted=_encrypted - In the implementation block
@property (nonatomic,readonly) NSString * mimeType;                                                   //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,readonly) NSData * data;                                                         //@synthesize data=_data - In the implementation block
+(id)new;
-(NSString *)mimeType;
-(id)init;
-(id)debugDescription;
-(id<HAP2AccessoryServerTransportRequestEndpoint>)endpoint;
-(id)description;
-(NSData *)data;
-(BOOL)isEncrypted;
-(id)initForReadingWithEndpoint:(id)arg1 data:(id)arg2 encrypted:(BOOL)arg3 mimeType:(id)arg4 ;
-(id)initForWritingWithEndpoint:(id)arg1 data:(id)arg2 encrypted:(BOOL)arg3 mimeType:(id)arg4 ;
-(BOOL)isForReading;
-(BOOL)isForWriting;
@end

