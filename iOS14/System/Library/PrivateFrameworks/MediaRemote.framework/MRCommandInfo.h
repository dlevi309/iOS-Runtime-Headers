/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSDictionary, _MRCommandInfoProtobuf, NSData;

@interface MRCommandInfo : NSObject {

	BOOL _enabled;
	unsigned _command;
	NSDictionary* _options;

}

@property (nonatomic,readonly) _MRCommandInfoProtobuf * protobuf; 
@property (assign,nonatomic) unsigned command;                                            //@synthesize command=_command - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                                        //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSData * propertyListData; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)isCommandActuallySupportedEvenWhenDisabled:(unsigned)arg1 ;
+(id)dataFromCommandInfos:(id)arg1 ;
+(id)commandInfosFromData:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setEnabled:(BOOL)arg1 ;
-(NSDictionary *)options;
-(id)initWithData:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)initWithPropertyListData:(id)arg1 ;
-(id)description;
-(NSData *)data;
-(_MRCommandInfoProtobuf *)protobuf;
-(unsigned long long)hash;
-(NSData *)propertyListData;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)isEnabled;
-(unsigned)command;
-(void)setCommand:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

