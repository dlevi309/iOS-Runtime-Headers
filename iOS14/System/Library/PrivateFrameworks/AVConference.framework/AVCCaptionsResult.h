/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)tokens;
-(id)description;
-(NSString *)text;
-(void)dealloc;
-(unsigned)utteranceNumber;
-(unsigned)updateNumber;
-(id)initWithCapacity:(long long)arg1 utteranceComplete:(BOOL)arg2 utteranceNumber:(unsigned)arg3 updateNumber:(unsigned)arg4 ;
-(BOOL)addTokenWithString:(id)arg1 confidence:(double)arg2 spaceAfter:(BOOL)arg3 ;
-(BOOL)utteranceComplete;
@end

