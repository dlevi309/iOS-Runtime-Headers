/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFNamedProtobufMessage.h>
@class NSData, NSString, NSDictionary;


@protocol SFNamedProtobufMessage <NSObject>
@property (nonatomic,copy) NSData * protobufMessageData; 
@property (nonatomic,copy) NSString * protobufMessageName; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;
-(void)setProtobufMessageData:(id)arg1;
-(void)setProtobufMessageName:(id)arg1;
-(NSData *)protobufMessageData;
-(NSString *)protobufMessageName;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSDictionary;

@interface SFNamedProtobufMessage : NSObject <SFNamedProtobufMessage, NSSecureCoding, NSCopying> {

	NSData* _protobufMessageData;
	NSString* _protobufMessageName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSData * protobufMessageData;                             //@synthesize protobufMessageData=_protobufMessageData - In the implementation block
@property (nonatomic,copy) NSString * protobufMessageName;                           //@synthesize protobufMessageName=_protobufMessageName - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(void)setProtobufMessageData:(NSData *)arg1 ;
-(void)setProtobufMessageName:(NSString *)arg1 ;
-(NSData *)protobufMessageData;
-(NSString *)protobufMessageName;
@end

