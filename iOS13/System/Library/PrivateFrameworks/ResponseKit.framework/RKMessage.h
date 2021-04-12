/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/

#import <ResponseKit/ResponseKit-Structs.h>
#import <ResponseKit/RKText.h>

@class NSString, NSUUID, NSDate;

@interface RKMessage : RKText {

	NSString* _title;
	NSUUID* _senderUUID;
	NSDate* _dateSent;
	unsigned long long _position;

}

@property (copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (copy,readonly) NSUUID * senderUUID;                 //@synthesize senderUUID=_senderUUID - In the implementation block
@property (copy,readonly) NSDate * dateSent;                   //@synthesize dateSent=_dateSent - In the implementation block
@property (readonly) unsigned long long position;              //@synthesize position=_position - In the implementation block
-(NSString *)title;
-(unsigned long long)position;
-(NSDate *)dateSent;
-(id)initWithString:(id)arg1 title:(id)arg2 languageIdentifier:(id)arg3 senderUUID:(id)arg4 dateSent:(id)arg5 position:(unsigned long long)arg6 ;
-(void)annotateRange:(NSRange)arg1 type:(unsigned long long)arg2 field:(unsigned long long)arg3 ;
-(NSUUID *)senderUUID;
@end

