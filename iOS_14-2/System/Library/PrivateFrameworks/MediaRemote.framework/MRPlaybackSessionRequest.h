/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


#import <MediaRemote/MediaRemote-Structs.h>
@class NSString, _MRPlaybackSessionRequestProtobuf, NSData;

@interface MRPlaybackSessionRequest : NSObject {

	BOOL _hasLocation;
	BOOL _hasLength;
	NSString* _requestIdentifier;
	NSString* _identifier;
	NSString* _type;
	unsigned long long _location;
	unsigned long long _length;

}

@property (nonatomic,readonly) _MRPlaybackSessionRequestProtobuf * protobuf; 
@property (nonatomic,copy) NSString * requestIdentifier;                                  //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * type;                                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long location;                                 //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLocation;                                            //@synthesize hasLocation=_hasLocation - In the implementation block
@property (assign,nonatomic) unsigned long long length;                                   //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) BOOL hasLength;                                              //@synthesize hasLength=_hasLength - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,readonly) NSRange range; 
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(void)setLength:(unsigned long long)arg1 ;
-(void)setHasLocation:(BOOL)arg1 ;
-(NSString *)requestIdentifier;
-(NSRange)range;
-(void)setHasLength:(BOOL)arg1 ;
-(unsigned long long)location;
-(unsigned long long)length;
-(void)setType:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(id)arg2 ;
-(void)setLocation:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)hasLocation;
-(NSData *)data;
-(NSString *)type;
-(_MRPlaybackSessionRequestProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 range:(NSRange)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)hasLength;
-(BOOL)isEqual:(id)arg1 ;
@end

