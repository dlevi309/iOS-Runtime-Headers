/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioTransportCommon.framework/AudioTransportCommon
*/


@class IOKService, IOKConnection, ATCIOA2StreamFormat, NSArray;

@interface ATCIOA2Stream : NSObject {

	IOKService* _service;
	IOKConnection* _connection;
	unsigned long long _index;
	unsigned _physicalID;
	BOOL _input;
	unsigned _startingChannel;
	ATCIOA2StreamFormat* _currentFormat;
	NSArray* _availableFormats;

}

@property (getter=isInput,nonatomic,readonly) BOOL input;                             //@synthesize input=_input - In the implementation block
@property (nonatomic,copy,readonly) ATCIOA2StreamFormat * currentFormat;              //@synthesize currentFormat=_currentFormat - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableFormats;                       //@synthesize availableFormats=_availableFormats - In the implementation block
@property (nonatomic,readonly) unsigned startingChannel;                              //@synthesize startingChannel=_startingChannel - In the implementation block
-(BOOL)isInput;
-(ATCIOA2StreamFormat *)currentFormat;
-(unsigned)startingChannel;
-(NSArray *)availableFormats;
-(id)initWithService:(id)arg1 connection:(id)arg2 index:(unsigned long long)arg3 input:(BOOL)arg4 description:(id)arg5 ;
@end

