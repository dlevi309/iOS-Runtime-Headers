/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSString, _MRPlaybackSessionRequestProtobuf, NSData;

@interface MRPlaybackSessionRequest : NSObject {

	NSString* _identifier;
	NSString* _type;

}

@property (nonatomic,readonly) _MRPlaybackSessionRequestProtobuf * protobuf; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                      //@synthesize type=_type - In the implementation block
-(id)description;
-(NSString *)type;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(NSString *)identifier;
-(_MRPlaybackSessionRequestProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(id)arg2 ;
@end

