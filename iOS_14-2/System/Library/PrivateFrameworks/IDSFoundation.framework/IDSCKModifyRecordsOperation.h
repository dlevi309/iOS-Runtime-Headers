/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)savePolicy;
-(id)modifyRecordsCompletionBlock;
-(void)setModifyRecordsCompletionBlock:(id)arg1 ;
-(void)setSavePolicy:(long long)arg1 ;
@end

