/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PBCodable : NSObject <NSSecureCoding>

@property (nonatomic,readonly) NSData * data; 
+(id)options;
+(BOOL)supportsSecureCoding;
-(void)setClientMetricsIfSupported:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)formattedText;
@end

