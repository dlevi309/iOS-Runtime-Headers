/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSArray;

@interface _CKAcknowledgmentTally : NSObject {

	long long _type;
	NSArray* _senders;
	NSArray* _contacts;

}

@property (assign,nonatomic) long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * senders;               //@synthesize senders=_senders - In the implementation block
@property (nonatomic,copy) NSArray * contacts;              //@synthesize contacts=_contacts - In the implementation block
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)contacts;
-(NSArray *)senders;
-(void)setSenders:(NSArray *)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)description;
-(id)initWithType:(long long)arg1 senders:(id)arg2 ;
-(long long)type;
@end

