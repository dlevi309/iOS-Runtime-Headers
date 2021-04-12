/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NSError;

@interface NUResponse : NSObject {

	id _result;
	NSError* _error;

}

@property (retain) id result;                    //@synthesize result=_result - In the implementation block
@property (retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)init;
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)result;
-(void)setResult:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(id)initWithResult:(id)arg1 ;
-(id)result:(id*)arg1 ;
@end

