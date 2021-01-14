/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSString, NSError;

@interface MRMigrationBehaviorResult : NSObject {

	NSString* _sourceUID;
	NSString* _destinationUID;
	long long _action;
	NSString* _reason;
	NSError* _error;

}

@property (nonatomic,retain) NSString * sourceUID;                   //@synthesize sourceUID=_sourceUID - In the implementation block
@property (nonatomic,retain) NSString * destinationUID;              //@synthesize destinationUID=_destinationUID - In the implementation block
@property (assign,nonatomic) long long action;                       //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSString * reason;                      //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSError * error;                        //@synthesize error=_error - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)destinationUID;
-(void)setSourceUID:(NSString *)arg1 ;
-(void)setDestinationUID:(NSString *)arg1 ;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSString *)sourceUID;
-(NSError *)error;
-(id)description;
-(NSString *)reason;
-(unsigned long long)hash;
-(void)setReason:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

