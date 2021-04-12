/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSError.h>
@class NSNumber, NSString, NSDictionary, IKJSError;


@protocol IKJSError <JSExport>
@property (nonatomic,readonly) NSNumber * code; 
@property (nonatomic,readonly) NSString * domain; 
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) NSString * failureReason; 
@property (nonatomic,readonly) NSString * recoverySuggestion; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) IKJSError * underlyingError; 
@required
-(NSString *)failureReason;
-(NSDictionary *)userInfo;
-(IKJSError *)underlyingError;
-(NSString *)domain;
-(NSString *)description;
-(NSNumber *)code;
-(NSString *)recoverySuggestion;

@end


@class NSNumber, NSString, NSDictionary, NSError;

@interface IKJSError : IKJSObject <IKJSError> {

	IKJSError* _jsUnderlyingError;
	NSError* _wrappedError;

}

@property (nonatomic,readonly) NSError * wrappedError;                     //@synthesize wrappedError=_wrappedError - In the implementation block
@property (nonatomic,readonly) NSNumber * code; 
@property (nonatomic,readonly) NSString * domain; 
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) NSString * failureReason; 
@property (nonatomic,readonly) NSString * recoverySuggestion; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) IKJSError * underlyingError; 
-(NSString *)failureReason;
-(NSDictionary *)userInfo;
-(IKJSError *)underlyingError;
-(NSString *)domain;
-(NSString *)description;
-(NSNumber *)code;
-(id)initWithError:(id)arg1 appContext:(id)arg2 ;
-(NSError *)wrappedError;
-(NSString *)recoverySuggestion;
@end

