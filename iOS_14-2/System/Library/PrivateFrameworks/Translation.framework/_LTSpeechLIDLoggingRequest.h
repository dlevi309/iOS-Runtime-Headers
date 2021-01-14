/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/_LTLoggingRequest.h>

@class NSString, _LTLocalePair, NSLocale, _LTLanguageDetectionResult;

@interface _LTSpeechLIDLoggingRequest : NSObject <_LTLoggingRequest> {

	NSString* _conversationID;
	NSString* _requestID;
	_LTLocalePair* _localePair;
	NSLocale* _targetLocale;
	NSLocale* _selectedLocale;
	_LTLanguageDetectionResult* _lidResult;

}

@property (nonatomic,copy) NSString * conversationID;                             //@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,copy) NSString * requestID;                                  //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) _LTLocalePair * localePair;                            //@synthesize localePair=_localePair - In the implementation block
@property (nonatomic,copy) NSLocale * targetLocale;                               //@synthesize targetLocale=_targetLocale - In the implementation block
@property (nonatomic,copy) NSLocale * selectedLocale;                             //@synthesize selectedLocale=_selectedLocale - In the implementation block
@property (nonatomic,retain) _LTLanguageDetectionResult * lidResult;              //@synthesize lidResult=_lidResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)conversationID;
-(void)setConversationID:(NSString *)arg1 ;
-(NSString *)requestID;
-(NSLocale *)selectedLocale;
-(_LTLanguageDetectionResult *)lidResult;
-(_LTLocalePair *)localePair;
-(NSLocale *)targetLocale;
-(void)setSelectedLocale:(NSLocale *)arg1 ;
-(void)setLidResult:(_LTLanguageDetectionResult *)arg1 ;
-(void)setLocalePair:(_LTLocalePair *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequestID:(NSString *)arg1 ;
-(void)setTargetLocale:(NSLocale *)arg1 ;
@end

