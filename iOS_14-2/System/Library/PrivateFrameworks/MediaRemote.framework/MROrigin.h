/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, _MROriginProtobuf, NSData;

@interface MROrigin : NSObject <NSCopying> {

	BOOL _local;
	int _identifier;
	long long _type;
	NSString* _displayName;

}

@property (nonatomic,readonly) _MROriginProtobuf * protobuf; 
@property (assign,nonatomic) int identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (assign,getter=isLocal,nonatomic) BOOL local;                   //@synthesize local=_local - In the implementation block
@property (nonatomic,readonly) MROrigin * skeleton; 
@property (nonatomic,readonly) NSData * data; 
+(id)localOrigin;
+(id)anyOrigin;
-(BOOL)isLocal;
-(MROrigin *)skeleton;
-(id)initWithIdentifier:(int)arg1 type:(long long)arg2 displayName:(id)arg3 ;
-(void)setType:(long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSData *)data;
-(long long)type;
-(_MROriginProtobuf *)protobuf;
-(void)setLocal:(BOOL)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setIdentifier:(int)arg1 ;
-(int)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
@end

