/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)TA;
-(NSNumber *)TB;
-(NSNumber *)TC;
-(NSNumber *)protocol;
-(id)description;
-(id)initWithProtocol:(id)arg1 ;
-(id)parseWithY:(char*)arg1 toProtocol:(id*)arg2 fromSource:(/*^block*/id)arg3 hasNext:(BOOL*)arg4 ;
@end

