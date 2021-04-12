/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


#import <ChatKit/ChatKit-Structs.h>
@interface CKBalloonSelectionState : NSObject {

	long long _style;
	NSRange _textSelectionRange;

}

@property (nonatomic,readonly) long long style;                         //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NSRange textSelectionRange;              //@synthesize textSelectionRange=_textSelectionRange - In the implementation block
+(id)balloonSelectionState:(long long)arg1 ;
+(id)balloonSelectionState:(long long)arg1 textSelectionRange:(NSRange)arg2 ;
-(id)description;
-(NSRange)textSelectionRange;
-(long long)style;
-(id)initWithStyle:(long long)arg1 textSelectionRange:(NSRange)arg2 ;
@end

