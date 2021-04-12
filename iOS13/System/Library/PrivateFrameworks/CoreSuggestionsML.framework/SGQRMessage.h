/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class NSString, NSDate;

@interface SGQRMessage : NSObject {

	NSString* _message;
	NSString* _context;
	NSDate* _time;

}

@property (nonatomic,readonly) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSString * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSDate * time;                   //@synthesize time=_time - In the implementation block
-(NSString *)context;
-(NSDate *)time;
-(NSString *)message;
-(id)initWithMessage:(id)arg1 forContext:(id)arg2 time:(id)arg3 ;
-(BOOL)isEqualToQRMessage:(id)arg1 ;
@end

