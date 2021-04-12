/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCommand.h>

@class NSString;

@interface FCModifyNotificationsForMarketingCommand : FCCommand {

	int _type;
	int _action;
	NSString* _dsid;

}

@property (assign,nonatomic) int type;                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int action;                 //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * dsid;              //@synthesize dsid=_dsid - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)action;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(void)setAction:(int)arg1 ;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(id)initWithType:(int)arg1 action:(int)arg2 iTunesDSID:(id)arg3 ;
@end

