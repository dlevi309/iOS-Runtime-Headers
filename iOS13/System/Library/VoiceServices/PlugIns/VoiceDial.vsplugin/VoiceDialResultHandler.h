/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
*/

#import <libobjc.A.dylib/VSRecognitionResultHandler.h>

@class VoiceDialNameDataSource, NSString;

@interface VoiceDialResultHandler : NSObject <VSRecognitionResultHandler> {

	void* _addressBook;
	VoiceDialNameDataSource* _nameSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void*)_addressBook;
-(id)_nameSource;
-(id)actionForRecognitionResults:(id)arg1 ;
-(id)_phoneticNames:(id)arg1 fromDictionary:(id)arg2 ;
@end

