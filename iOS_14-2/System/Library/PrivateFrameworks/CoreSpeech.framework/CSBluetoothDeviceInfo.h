/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSString;

@interface CSBluetoothDeviceInfo : NSObject {

	BOOL _supportDoAP;
	BOOL _isTemporaryPairedNotInContacts;
	NSString* _address;

}

@property (nonatomic,copy) NSString * address;                                 //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) BOOL supportDoAP;                                 //@synthesize supportDoAP=_supportDoAP - In the implementation block
@property (assign,nonatomic) BOOL isTemporaryPairedNotInContacts;              //@synthesize isTemporaryPairedNotInContacts=_isTemporaryPairedNotInContacts - In the implementation block
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(BOOL)supportDoAP;
-(BOOL)isTemporaryPairedNotInContacts;
-(void)setSupportDoAP:(BOOL)arg1 ;
-(void)setIsTemporaryPairedNotInContacts:(BOOL)arg1 ;
@end

