/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class NSString;

@interface _MFEmailAddress : NSObject {

	NSString* _address;
	NSString* _comment;

}

@property (nonatomic,copy,readonly) NSString * fullAddress; 
@property (nonatomic,copy,readonly) NSString * address;                  //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSString * comment;                  //@synthesize comment=_comment - In the implementation block
-(NSString *)address;
-(NSString *)comment;
-(id)initWithAddress:(id)arg1 comment:(id)arg2 ;
-(NSString *)fullAddress;
@end

