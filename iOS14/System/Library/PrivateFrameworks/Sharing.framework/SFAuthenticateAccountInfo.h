/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@class NSString;

@interface SFAuthenticateAccountInfo : NSObject {

	unsigned _type;
	NSString* _altDSID;

}

@property (nonatomic,readonly) unsigned type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * altDSID;              //@synthesize altDSID=_altDSID - In the implementation block
-(id)description;
-(NSString *)altDSID;
-(unsigned)type;
-(id)initWithType:(unsigned)arg1 altDSID:(id)arg2 ;
@end

