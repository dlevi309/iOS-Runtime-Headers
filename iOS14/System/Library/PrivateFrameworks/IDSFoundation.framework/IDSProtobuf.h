/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary, NSData, IDSMessageContext;

@interface IDSProtobuf : NSObject <NSCoding> {

	NSMutableDictionary* _protoBufParams;
	NSData* _uncompressedData;

}

@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) NSData * uncompressedData;                //@synthesize uncompressedData=_uncompressedData - In the implementation block
@property (assign,nonatomic) unsigned short type; 
@property (assign,nonatomic) BOOL isResponse; 
@property (nonatomic,retain) IDSMessageContext * context; 
+(id)keyRepresentationForType:(unsigned short)arg1 isResponse:(BOOL)arg2 ;
-(id)pkDescription;
-(id)dictionaryRepresentation;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned short)arg1 ;
-(IDSMessageContext *)context;
-(id)initWithDictionary:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)description;
-(NSData *)data;
-(id)dictionaryRepresentationWithUncompressedData;
-(NSData *)uncompressedData;
-(void)setUncompressedData:(NSData *)arg1 ;
-(unsigned short)type;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isResponse;
-(id)initWithProtobufData:(id)arg1 type:(unsigned short)arg2 isResponse:(BOOL)arg3 ;
-(void)setIsResponse:(BOOL)arg1 ;
-(void)dealloc;
-(void)setContext:(IDSMessageContext *)arg1 ;
@end

