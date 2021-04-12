/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@class NSString;

@interface IDSCKNotificationInfo : NSObject {

	BOOL _shouldSendContentAvailable;
	NSString* _alertLocalizationKey;

}

@property (nonatomic,copy) NSString * alertLocalizationKey;                //@synthesize alertLocalizationKey=_alertLocalizationKey - In the implementation block
@property (assign,nonatomic) BOOL shouldSendContentAvailable;              //@synthesize shouldSendContentAvailable=_shouldSendContentAvailable - In the implementation block
+(id)alloc;
+(Class)__class;
-(void)setAlertLocalizationKey:(NSString *)arg1 ;
-(BOOL)shouldSendContentAvailable;
-(void)setShouldSendContentAvailable:(BOOL)arg1 ;
-(NSString *)alertLocalizationKey;
@end

