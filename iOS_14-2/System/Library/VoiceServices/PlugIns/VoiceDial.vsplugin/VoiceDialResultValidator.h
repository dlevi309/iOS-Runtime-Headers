/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
*/

#import <libobjc.A.dylib/VSRecognitionResultValidator.h>

@class VoiceDialNameDataSource, NSString;

@interface VoiceDialResultValidator : NSObject <VSRecognitionResultValidator> {

	void* _addressBook;
	VoiceDialNameDataSource* _nameSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_nameSource;
-(id)validRecognitionResultFromRecognitionResult:(id)arg1 ;
-(id)validRecognitionResultFromRecognitionResult:(id)arg1 knownDisambiguationValues:(id)arg2 ;
-(void*)_addressBook;
-(void)dealloc;
@end

