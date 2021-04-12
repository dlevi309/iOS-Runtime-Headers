/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


@class NSString;

@interface RKRankedResponse : NSObject {

	NSString* _response;
	unsigned long long _inputMethod;
	double _score;

}

@property (retain) NSString * response;                         //@synthesize response=_response - In the implementation block
@property (assign) unsigned long long inputMethod;              //@synthesize inputMethod=_inputMethod - In the implementation block
@property (assign) double score;                                //@synthesize score=_score - In the implementation block
-(double)score;
-(void)setScore:(double)arg1 ;
-(NSString *)response;
-(void)setResponse:(NSString *)arg1 ;
-(id)initWithResponse:(id)arg1 inputMethod:(unsigned long long)arg2 score:(double)arg3 ;
-(unsigned long long)inputMethod;
-(void)setInputMethod:(unsigned long long)arg1 ;
@end

