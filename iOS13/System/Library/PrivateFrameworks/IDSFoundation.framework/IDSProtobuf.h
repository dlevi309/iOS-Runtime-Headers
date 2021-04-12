/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned short)type;
-(void)setType:(unsigned short)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(IDSMessageContext *)context;
-(void)setContext:(IDSMessageContext *)arg1 ;
-(BOOL)isResponse;
-(void)setIsResponse:(BOOL)arg1 ;
-(id)initWithProtobufData:(id)arg1 type:(unsigned short)arg2 isResponse:(BOOL)arg3 ;
-(id)dictionaryRepresentationWithUncompressedData;
-(NSData *)uncompressedData;
-(void)setUncompressedData:(NSData *)arg1 ;
@end

