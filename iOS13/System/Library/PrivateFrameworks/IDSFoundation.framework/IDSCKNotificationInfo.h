/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setShouldSendContentAvailable:(BOOL)arg1 ;
-(void)setAlertLocalizationKey:(NSString *)arg1 ;
-(NSString *)alertLocalizationKey;
-(BOOL)shouldSendContentAvailable;
@end

