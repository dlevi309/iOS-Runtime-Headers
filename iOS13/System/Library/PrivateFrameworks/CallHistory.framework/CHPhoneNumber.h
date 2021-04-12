/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CHLogger.h>

@class NSString;

@interface CHPhoneNumber : CHLogger {

	BOOL _formattedRepresentationAttempted;
	BOOL _normalizedRepresentationAttempted;
	NSString* _formattedRepresentation;
	NSString* _normalizedRepresentation;
	NSString* _digits;
	NSString* _isoCountryCode;

}

@property (nonatomic,copy,readonly) NSString * digits;                                //@synthesize digits=_digits - In the implementation block
@property (nonatomic,copy) NSString * isoCountryCode;                                 //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (assign,nonatomic) BOOL formattedRepresentationAttempted;                   //@synthesize formattedRepresentationAttempted=_formattedRepresentationAttempted - In the implementation block
@property (assign,nonatomic) BOOL normalizedRepresentationAttempted;                  //@synthesize normalizedRepresentationAttempted=_normalizedRepresentationAttempted - In the implementation block
@property (nonatomic,copy,readonly) NSString * formattedRepresentation;               //@synthesize formattedRepresentation=_formattedRepresentation - In the implementation block
@property (nonatomic,copy,readonly) NSString * normalizedRepresentation;              //@synthesize normalizedRepresentation=_normalizedRepresentation - In the implementation block
-(NSString *)isoCountryCode;
-(NSString *)digits;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(NSString *)formattedRepresentation;
-(id)initWithDigits:(id)arg1 isoCountryCode:(id)arg2 ;
-(NSString *)normalizedRepresentation;
-(BOOL)formattedRepresentationAttempted;
-(void)setFormattedRepresentationAttempted:(BOOL)arg1 ;
-(BOOL)normalizedRepresentationAttempted;
-(void)setNormalizedRepresentationAttempted:(BOOL)arg1 ;
@end

