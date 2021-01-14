/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRemoteExecutionErrorEvent : WFEvent {

	NSString* _source;
	NSString* _destinationType;
	NSString* _errorDomain;
	NSString* _errorCode;

}

@property (nonatomic,copy) NSString * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * destinationType;              //@synthesize destinationType=_destinationType - In the implementation block
@property (nonatomic,copy) NSString * errorDomain;                  //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,copy) NSString * errorCode;                    //@synthesize errorCode=_errorCode - In the implementation block
+(Class)codableEventClass;
-(NSString *)errorDomain;
-(NSString *)destinationType;
-(NSString *)errorCode;
-(void)setDestinationType:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(NSString *)source;
-(void)setErrorDomain:(NSString *)arg1 ;
@end

