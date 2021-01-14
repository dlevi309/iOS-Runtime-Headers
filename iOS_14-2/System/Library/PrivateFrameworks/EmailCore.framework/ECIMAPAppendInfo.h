/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


@interface ECIMAPAppendInfo : NSObject {

	unsigned _uidValidity;
	unsigned long long _newMessageUID;

}

@property (assign,nonatomic) unsigned uidValidity;                          //@synthesize uidValidity=_uidValidity - In the implementation block
@property (assign,nonatomic) unsigned long long newMessageUID;              //@synthesize newMessageUID=_newMessageUID - In the implementation block
-(unsigned)uidValidity;
-(void)setUidValidity:(unsigned)arg1 ;
-(unsigned long long)newMessageUID;
-(void)setNewMessageUID:(unsigned long long)arg1 ;
@end

