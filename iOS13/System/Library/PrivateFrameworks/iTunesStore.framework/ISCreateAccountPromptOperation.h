/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ISCreateAccountPromptOperation : ISOperation {

	long long _responseType;
	NSString* _reason;

}

@property (assign,nonatomic) long long responseType;              //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,retain) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
-(id)init;
-(void)run;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(long long)responseType;
-(void)setResponseType:(long long)arg1 ;
-(id)_newCreateAccountDialog;
-(long long)_mapCorrectSelectedButtonWithDialog:(id)arg1 ;
-(BOOL)_hasActiveICloudAccount;
@end

