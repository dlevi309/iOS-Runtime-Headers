/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@class NSNumber;

@interface TKSmartCardATRInterfaceGroup : NSObject {

	NSNumber* _ABC[3];
	NSNumber* _protocol;

}

@property (nonatomic,readonly) NSNumber * TA; 
@property (nonatomic,readonly) NSNumber * TB; 
@property (nonatomic,readonly) NSNumber * TC; 
@property (nonatomic,readonly) NSNumber * protocol;              //@synthesize protocol=_protocol - In the implementation block
-(id)description;
-(NSNumber *)protocol;
-(id)initWithProtocol:(id)arg1 ;
-(NSNumber *)TA;
-(NSNumber *)TB;
-(NSNumber *)TC;
-(id)parseWithY:(char*)arg1 toProtocol:(id*)arg2 fromSource:(/*^block*/id)arg3 hasNext:(BOOL*)arg4 ;
@end

