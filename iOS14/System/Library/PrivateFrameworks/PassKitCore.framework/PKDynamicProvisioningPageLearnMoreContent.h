/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface PKDynamicProvisioningPageLearnMoreContent : NSObject <NSCopying> {

	NSString* _buttonTitle;
	NSURL* _buttonURL;
	NSString* _title;
	NSString* _subtitle;
	NSString* _body;
	NSString* _bussinessChatButtonTitle;
	NSString* _bussinesChatIntentName;

}

@property (nonatomic,copy) NSString * buttonTitle;                           //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy) NSURL * buttonURL;                                //@synthesize buttonURL=_buttonURL - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * body;                                  //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * bussinessChatButtonTitle;              //@synthesize bussinessChatButtonTitle=_bussinessChatButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * bussinesChatIntentName;                //@synthesize bussinesChatIntentName=_bussinesChatIntentName - In the implementation block
-(void)setBody:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(NSString *)body;
-(NSURL *)buttonURL;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setButtonURL:(NSURL *)arg1 ;
-(id)initWithDictonary:(id)arg1 ;
-(void)setBussinessChatButtonTitle:(NSString *)arg1 ;
-(NSString *)bussinesChatIntentName;
-(NSString *)bussinessChatButtonTitle;
-(void)setBussinesChatIntentName:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

