/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCommand.h>

@class NSString;

@interface FCSubmitNewsletterPersonalizationVectorCommand : FCCommand {

	NSString* _personalizationVector;

}

@property (nonatomic,retain) NSString * personalizationVector;              //@synthesize personalizationVector=_personalizationVector - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(id)initWithPersonalizationVector:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPersonalizationVector:(NSString *)arg1 ;
-(NSString *)personalizationVector;
@end

