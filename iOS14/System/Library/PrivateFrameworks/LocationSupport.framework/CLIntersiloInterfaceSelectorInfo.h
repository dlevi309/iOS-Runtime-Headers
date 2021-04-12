/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/


@class NSMethodSignature, NSString;

@interface CLIntersiloInterfaceSelectorInfo : NSObject {

	int _replyBlockIndex;
	int _returnAddressIndex;
	SEL _sel;
	NSMethodSignature* _sig;

}

@property (nonatomic,readonly) SEL sel;                                     //@synthesize sel=_sel - In the implementation block
@property (nonatomic,readonly) int replyBlockIndex;                         //@synthesize replyBlockIndex=_replyBlockIndex - In the implementation block
@property (nonatomic,readonly) int returnAddressIndex;                      //@synthesize returnAddressIndex=_returnAddressIndex - In the implementation block
@property (nonatomic,retain,readonly) NSMethodSignature * sig;              //@synthesize sig=_sig - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeStr; 
-(id)initWithSelector:(SEL)arg1 andMethodSignature:(id)arg2 ;
-(SEL)sel;
-(NSString *)typeStr;
-(int)returnAddressIndex;
-(id)description;
-(int)replyBlockIndex;
-(NSMethodSignature *)sig;
@end

