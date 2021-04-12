/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
*/

#import <libobjc.A.dylib/BMStoreData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PBCodable : NSObject <BMStoreData, NSSecureCoding>

@property (nonatomic,readonly) unsigned dataVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * data; 
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)options;
-(id)hexStringFromData:(id)arg1 ;
-(id)logMessage;
-(id)logMessageDictionaryFromProtobufDictionary:(id)arg1 ;
-(unsigned)dataVersion;
-(id)serialize;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)si_dictionaryRepresentation;
-(id)mr_valueForPotentiallyUndefinedKey:(id)arg1 ;
-(void)setClientMetricsIfSupported:(id)arg1 ;
-(id)wrapAsAnyEvent;
-(int)getAnyEventType;
-(id)dictionaryRepresentation;
-(id)init;
-(id)formattedText;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

