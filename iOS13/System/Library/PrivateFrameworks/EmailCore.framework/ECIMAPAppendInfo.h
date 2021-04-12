/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

