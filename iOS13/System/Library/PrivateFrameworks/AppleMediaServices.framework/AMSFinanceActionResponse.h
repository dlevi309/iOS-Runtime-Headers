/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSFinancePerformable.h>

@class ACAccount, NSString, AMSURLTaskInfo, NSURL;

@interface AMSFinanceActionResponse : NSObject <AMSFinancePerformable> {

	ACAccount* _account;
	NSString* _creditString;
	long long _kind;
	AMSURLTaskInfo* _taskInfo;
	NSURL* _URL;

}

@property (nonatomic,retain) ACAccount * account;                    //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * creditString;                //@synthesize creditString=_creditString - In the implementation block
@property (assign,nonatomic) long long kind;                         //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) AMSURLTaskInfo * taskInfo;              //@synthesize taskInfo=_taskInfo - In the implementation block
@property (nonatomic,retain) NSURL * URL;                            //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionWithActionDictionary:(id)arg1 taskInfo:(id)arg2 ;
+(id)actionWithUpdatedCreditString:(id)arg1 account:(id)arg2 taskInfo:(id)arg3 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(long long)kind;
-(void)setKind:(long long)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(id)initWithTaskInfo:(id)arg1 ;
-(void)setCreditString:(NSString *)arg1 ;
-(id)_performCreditDisplayUpdate;
-(id)_performGotoURL;
-(id)_performOpenURL;
-(NSString *)creditString;
-(AMSURLTaskInfo *)taskInfo;
-(id)performWithTaskInfo:(id)arg1 ;
-(void)setTaskInfo:(AMSURLTaskInfo *)arg1 ;
@end

