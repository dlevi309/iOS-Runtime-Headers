/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSMutableArray, NSArray, NSString;

@interface AVCCaptionsResult : NSObject {

	BOOL _utteranceComplete;
	NSMutableArray* _tokens;
	unsigned _utteranceNumber;
	unsigned _updateNumber;

}

@property (nonatomic,readonly) BOOL utteranceComplete;                //@synthesize utteranceComplete=_utteranceComplete - In the implementation block
@property (nonatomic,readonly) NSArray * tokens;                      //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) unsigned utteranceNumber;              //@synthesize utteranceNumber=_utteranceNumber - In the implementation block
@property (nonatomic,readonly) unsigned updateNumber;                 //@synthesize updateNumber=_updateNumber - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)text;
-(NSArray *)tokens;
-(unsigned)utteranceNumber;
-(unsigned)updateNumber;
-(id)initWithCapacity:(long long)arg1 utteranceComplete:(BOOL)arg2 utteranceNumber:(unsigned)arg3 updateNumber:(unsigned)arg4 ;
-(BOOL)addTokenWithString:(id)arg1 confidence:(double)arg2 spaceAfter:(BOOL)arg3 ;
-(BOOL)utteranceComplete;
@end

