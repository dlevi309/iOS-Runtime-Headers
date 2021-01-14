/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <TestFlightCore/TFFeedbackEntry.h>

@class NSString;

@interface TFFeedbackEntryShortText : TFFeedbackEntry {

	NSString* _placeholder;
	unsigned long long _contentType;

}

@property (nonatomic,copy,readonly) NSString * placeholder;                 //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,readonly) unsigned long long contentType;              //@synthesize contentType=_contentType - In the implementation block
-(unsigned long long)contentType;
-(NSString *)placeholder;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 placeholder:(id)arg3 contentType:(unsigned long long)arg4 ;
@end

