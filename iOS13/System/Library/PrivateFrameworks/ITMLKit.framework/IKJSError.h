/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(NSString *)domain;
-(NSNumber *)code;
-(NSDictionary *)userInfo;
-(NSString *)failureReason;
-(IKJSError *)underlyingError;
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
-(NSString *)description;
-(NSString *)domain;
-(NSNumber *)code;
-(NSDictionary *)userInfo;
-(NSString *)failureReason;
-(IKJSError *)underlyingError;
-(id)initWithError:(id)arg1 appContext:(id)arg2 ;
-(NSError *)wrappedError;
-(NSString *)recoverySuggestion;
@end

