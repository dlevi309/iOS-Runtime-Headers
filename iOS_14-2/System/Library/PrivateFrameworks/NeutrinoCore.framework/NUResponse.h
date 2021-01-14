/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NSError;

@interface NUResponse : NSObject {

	id _result;
	NSError* _error;

}

@property (retain) id result;                    //@synthesize result=_result - In the implementation block
@property (retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)setResult:(id)arg1 ;
-(id)initWithResult:(id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(id)init;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)description;
-(id)result:(id*)arg1 ;
-(id)result;
@end

