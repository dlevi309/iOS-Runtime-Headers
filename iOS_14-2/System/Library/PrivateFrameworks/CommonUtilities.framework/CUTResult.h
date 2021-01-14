/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/


@class NSError;

@interface CUTResult : NSObject {

	long long _state;
	NSError* _inError;
	id _inValue;

}

@property (nonatomic,retain) NSError * inError;              //@synthesize inError=_inError - In the implementation block
@property (nonatomic,retain) id inValue;                     //@synthesize inValue=_inValue - In the implementation block
@property (nonatomic,readonly) long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) id value; 
-(id)initWithError:(id)arg1 ;
-(id)initWithSuccess:(id)arg1 ;
-(NSError *)error;
-(id)inValue;
-(void)setInValue:(id)arg1 ;
-(void)setInError:(NSError *)arg1 ;
-(long long)state;
-(NSError *)inError;
-(id)initWithState:(long long)arg1 value:(id)arg2 error:(id)arg3 ;
-(id)value;
@end

