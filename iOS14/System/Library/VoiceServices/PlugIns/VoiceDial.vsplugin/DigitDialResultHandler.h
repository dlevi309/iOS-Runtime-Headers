/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)actionForRecognitionResult:(id)arg1 ;
-(TUContactsDataProvider *)contactsDataProvider;
-(void)setContactsDataProvider:(TUContactsDataProvider *)arg1 ;
@end

