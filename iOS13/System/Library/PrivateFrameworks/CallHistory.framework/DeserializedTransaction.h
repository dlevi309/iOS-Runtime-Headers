/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/


@class CHRecentCall;

@interface DeserializedTransaction : NSObject {

	CHRecentCall* _call;
	unsigned long long _type;

}

@property (nonatomic,readonly) CHRecentCall * call;              //@synthesize call=_call - In the implementation block
@property (assign) unsigned long long type;                      //@synthesize type=_type - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(CHRecentCall *)call;
-(id)initWithCall:(id)arg1 andType:(unsigned long long)arg2 ;
@end

