/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
*/

#import <libobjc.A.dylib/VSRecognitionResultHandler.h>

@class TUContactsDataProvider, NSString;

@interface DigitDialResultHandler : NSObject <VSRecognitionResultHandler> {

	TUContactsDataProvider* _contactsDataProvider;

}

@property (nonatomic,retain) TUContactsDataProvider * contactsDataProvider;              //@synthesize contactsDataProvider=_contactsDataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TUContactsDataProvider *)contactsDataProvider;
-(id)actionForRecognitionResult:(id)arg1 ;
-(void)setContactsDataProvider:(TUContactsDataProvider *)arg1 ;
@end

