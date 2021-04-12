/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <CryptoTokenKit/TKToken.h>

@class NSData, TKSmartCard;

@interface TKSmartCardToken : TKToken {

	NSData* _AID;
	TKSmartCard* _smartCard;
	id _keepAlive;

}

@property (nonatomic,readonly) TKSmartCard * smartCard;              //@synthesize smartCard=_smartCard - In the implementation block
@property (nonatomic,retain) id keepAlive;                           //@synthesize keepAlive=_keepAlive - In the implementation block
@property (readonly) NSData * AID;                                   //@synthesize AID=_AID - In the implementation block
-(NSData *)AID;
-(void)setKeepAlive:(id)arg1 ;
-(id)initWithSmartCard:(id)arg1 AID:(id)arg2 instanceID:(id)arg3 tokenDriver:(id)arg4 ;
-(TKSmartCard *)smartCard;
-(id)keepAlive;
@end

