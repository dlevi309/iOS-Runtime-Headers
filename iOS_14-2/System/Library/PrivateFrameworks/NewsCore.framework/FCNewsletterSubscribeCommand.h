/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCommand.h>

@class NSString;

@interface FCNewsletterSubscribeCommand : FCCommand {

	NSString* _newsletter;

}

@property (nonatomic,copy) NSString * newsletter;              //@synthesize newsletter=_newsletter - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithNewsletter:(id)arg1 ;
-(NSString *)newsletter;
-(void)setNewsletter:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
@end

