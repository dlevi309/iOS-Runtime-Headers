/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSString;

@interface _SBLoadApplicationResult : NSObject {

	BOOL _success;
	BOOL _update;
	NSString* _errorDescription;

}

@property (assign,getter=isSuccess,nonatomic) BOOL success;              //@synthesize success=_success - In the implementation block
@property (assign,getter=isUpdate,nonatomic) BOOL update;                //@synthesize update=_update - In the implementation block
@property (nonatomic,copy) NSString * errorDescription;                  //@synthesize errorDescription=_errorDescription - In the implementation block
-(void)setSuccess:(BOOL)arg1 ;
-(BOOL)isSuccess;
-(NSString *)errorDescription;
-(void)setErrorDescription:(NSString *)arg1 ;
-(BOOL)isUpdate;
-(void)setUpdate:(BOOL)arg1 ;
@end

