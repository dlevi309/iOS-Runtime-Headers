/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/


@class CHRecentCall;

@interface DeserializedTransaction : NSObject {

	CHRecentCall* _call;
	unsigned long long _type;

}

@property (nonatomic,readonly) CHRecentCall * call;              //@synthesize call=_call - In the implementation block
@property (assign) unsigned long long type;                      //@synthesize type=_type - In the implementation block
-(CHRecentCall *)call;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithCall:(id)arg1 andType:(unsigned long long)arg2 ;
-(unsigned long long)type;
@end

