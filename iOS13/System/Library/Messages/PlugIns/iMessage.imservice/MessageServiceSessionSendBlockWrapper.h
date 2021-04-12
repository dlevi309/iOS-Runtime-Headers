/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@class NSString;

@interface MessageServiceSessionSendBlockWrapper : NSObject {

	BOOL _isDelayedRichLinkBlock;
	NSString* _GUID;
	/*^block*/id _block;

}

@property (getter=UID,nonatomic,copy) NSString * GUID;                 //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,copy) id block;                                   //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL isDelayedRichLinkBlock;              //@synthesize isDelayedRichLinkBlock=_isDelayedRichLinkBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(NSString *)GUID;
-(void)setGUID:(NSString *)arg1 ;
-(BOOL)isDelayedRichLinkBlock;
-(void)setIsDelayedRichLinkBlock:(BOOL)arg1 ;
@end

