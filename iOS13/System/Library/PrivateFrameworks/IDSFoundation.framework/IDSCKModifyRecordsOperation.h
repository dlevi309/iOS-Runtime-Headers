/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@interface IDSCKModifyRecordsOperation : IDSCKDatabaseOperation {

	/*^block*/id _modifyRecordsCompletionBlock;
	long long _savePolicy;

}

@property (nonatomic,copy) id modifyRecordsCompletionBlock;              //@synthesize modifyRecordsCompletionBlock=_modifyRecordsCompletionBlock - In the implementation block
@property (assign,nonatomic) long long savePolicy;                       //@synthesize savePolicy=_savePolicy - In the implementation block
+(id)alloc;
+(Class)__class;
-(void)setSavePolicy:(long long)arg1 ;
-(void)setModifyRecordsCompletionBlock:(id)arg1 ;
-(long long)savePolicy;
-(id)modifyRecordsCompletionBlock;
@end

