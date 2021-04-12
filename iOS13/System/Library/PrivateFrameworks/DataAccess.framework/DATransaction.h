/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@class NSString;

@interface DATransaction : NSObject {

	NSString* _label;
	NSString* _transactionId;

}

@property (nonatomic,readonly) NSString * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * transactionId;              //@synthesize transactionId=_transactionId - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
-(NSString *)transactionId;
@end

