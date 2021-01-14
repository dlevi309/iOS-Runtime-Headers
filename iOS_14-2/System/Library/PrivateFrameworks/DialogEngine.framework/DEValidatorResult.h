/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSString, NSArray;

@interface DEValidatorResult : NSObject {

	NSString* _status;
	NSArray* _errors;
	NSArray* _warnings;

}

@property (nonatomic,retain) NSString * status;               //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSArray * errors;                //@synthesize errors=_errors - In the implementation block
@property (nonatomic,retain) NSArray * warnings;              //@synthesize warnings=_warnings - In the implementation block
-(void)setWarnings:(NSArray *)arg1 ;
-(NSArray *)errors;
-(void)setStatus:(NSString *)arg1 ;
-(void)setErrors:(NSArray *)arg1 ;
-(NSString *)status;
-(NSArray *)warnings;
@end

