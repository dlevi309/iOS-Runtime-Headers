/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)run;
-(id)init;
-(id)initWithReason:(id)arg1 ;
-(NSString *)reason;
-(void)setResponseType:(long long)arg1 ;
-(long long)responseType;
-(void)setReason:(NSString *)arg1 ;
-(id)_newCreateAccountDialog;
-(long long)_mapCorrectSelectedButtonWithDialog:(id)arg1 ;
-(BOOL)_hasActiveICloudAccount;
@end

