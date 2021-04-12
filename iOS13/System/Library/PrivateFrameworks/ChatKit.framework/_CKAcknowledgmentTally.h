/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)senders;
-(void)setSenders:(NSArray *)arg1 ;
-(id)initWithType:(long long)arg1 senders:(id)arg2 ;
@end

