/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(void)setNormalizedRepresentationAttempted:(BOOL)arg1 ;
-(NSString *)isoCountryCode;
-(void)setFormattedRepresentationAttempted:(BOOL)arg1 ;
-(NSString *)formattedRepresentation;
-(NSString *)normalizedRepresentation;
-(id)initWithDigits:(id)arg1 isoCountryCode:(id)arg2 ;
-(BOOL)normalizedRepresentationAttempted;
-(BOOL)formattedRepresentationAttempted;
-(NSString *)digits;
@end

