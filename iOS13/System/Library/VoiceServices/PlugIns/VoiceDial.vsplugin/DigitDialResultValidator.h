/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(id)_copyExceptionsForCountryCode:(id)arg1 ;
-(NSString *)networkCountryCode;
-(BOOL)_hasMinimumNumberOfDigits:(id)arg1 countryCode:(id)arg2 ;
-(BOOL)_isValidExceptionForDevice:(id)arg1 ;
-(BOOL)_isValidExceptionForNetwork:(id)arg1 ;
-(unsigned long long)indexOfValidPhoneNumber:(id)arg1 ;
-(id)validRecognitionResultFromRecognitionResult:(id)arg1 ;
-(void)setNetworkCountryCode:(NSString *)arg1 ;
@end

