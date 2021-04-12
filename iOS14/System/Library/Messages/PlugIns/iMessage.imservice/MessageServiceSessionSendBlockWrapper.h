/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)block;
-(id)init;
-(void)setBlock:(id)arg1 ;
-(id)description;
-(void)setGUID:(NSString *)arg1 ;
-(NSString *)GUID;
-(void)dealloc;
-(BOOL)isDelayedRichLinkBlock;
-(void)setIsDelayedRichLinkBlock:(BOOL)arg1 ;
@end

