/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
*/

#import <libobjc.A.dylib/VSRecognitionResultValidator.h>

@class NSArray, NSString;

@interface DigitDialResultValidator : NSObject <VSRecognitionResultValidator> {

	NSArray* _deviceExceptions;
	NSArray* _networkExceptions;
	NSString* _deviceCountryCode;
	NSString* _networkCountryCode;

}

@property (nonatomic,retain) NSString * deviceCountryCode;               //@synthesize deviceCountryCode=_deviceCountryCode - In the implementation block
@property (nonatomic,retain) NSString * networkCountryCode;              //@synthesize networkCountryCode=_networkCountryCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)deviceCountryCode;
-(id)validRecognitionResultFromRecognitionResult:(id)arg1 ;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(id)_copyExceptionsForCountryCode:(id)arg1 ;
-(NSString *)networkCountryCode;
-(BOOL)_hasMinimumNumberOfDigits:(id)arg1 countryCode:(id)arg2 ;
-(BOOL)_isValidExceptionForDevice:(id)arg1 ;
-(BOOL)_isValidExceptionForNetwork:(id)arg1 ;
-(unsigned long long)indexOfValidPhoneNumber:(id)arg1 ;
-(void)setNetworkCountryCode:(NSString *)arg1 ;
@end

