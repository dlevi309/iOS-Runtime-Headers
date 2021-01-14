/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFShowDialogEvent : WFEvent {

	NSString* _key;
	NSString* _dialogType;
	NSString* _presentationStyle;
	NSString* _dismissalType;
	NSString* _automationType;

}

@property (nonatomic,copy) NSString * key;                            //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * dialogType;                     //@synthesize dialogType=_dialogType - In the implementation block
@property (nonatomic,copy) NSString * presentationStyle;              //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,copy) NSString * dismissalType;                  //@synthesize dismissalType=_dismissalType - In the implementation block
@property (nonatomic,copy) NSString * automationType;                 //@synthesize automationType=_automationType - In the implementation block
+(Class)codableEventClass;
-(NSString *)presentationStyle;
-(void)setDialogType:(NSString *)arg1 ;
-(void)setPresentationStyle:(NSString *)arg1 ;
-(NSString *)key;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(NSString *)dialogType;
-(void)setKey:(NSString *)arg1 ;
-(void)setDismissalType:(NSString *)arg1 ;
-(NSString *)dismissalType;
@end

