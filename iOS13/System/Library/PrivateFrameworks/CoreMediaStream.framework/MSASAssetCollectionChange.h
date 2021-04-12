/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)GUID;
-(void)setGUID:(NSString *)arg1 ;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
-(void)setWasDeleted:(BOOL)arg1 ;
-(BOOL)wasDeleted;
@end

