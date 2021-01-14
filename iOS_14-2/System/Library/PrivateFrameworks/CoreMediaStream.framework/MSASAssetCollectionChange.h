/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/


@class NSString;

@interface MSASAssetCollectionChange : NSObject {

	BOOL _wasDeleted;
	NSString* _GUID;
	NSString* _ctag;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                         //@synthesize ctag=_ctag - In the implementation block
@property (assign,nonatomic) BOOL wasDeleted;                         //@synthesize wasDeleted=_wasDeleted - In the implementation block
-(BOOL)wasDeleted;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
-(id)description;
-(void)setWasDeleted:(BOOL)arg1 ;
-(void)setGUID:(NSString *)arg1 ;
-(NSString *)GUID;
@end

