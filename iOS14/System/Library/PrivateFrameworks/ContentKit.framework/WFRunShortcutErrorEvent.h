/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRunShortcutErrorEvent : WFEvent {

	BOOL _didRunRemotely;
	NSString* _key;
	NSString* _actionIdentifier;
	NSString* _errorDomain;
	NSString* _errorCode;

}

@property (nonatomic,copy) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * errorDomain;                   //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,copy) NSString * errorCode;                     //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL didRunRemotely;                    //@synthesize didRunRemotely=_didRunRemotely - In the implementation block
+(Class)codableEventClass;
-(NSString *)errorDomain;
-(NSString *)errorCode;
-(NSString *)key;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(NSString *)actionIdentifier;
-(void)setErrorCode:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(BOOL)didRunRemotely;
-(void)setDidRunRemotely:(BOOL)arg1 ;
@end

