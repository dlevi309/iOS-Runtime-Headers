/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSString, NSArray;

@interface DEValidationResult : NSObject {

	NSString* _status;
	NSArray* _errors;
	NSArray* _warnings;

}

@property (nonatomic,retain) NSString * status;               //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSArray * errors;                //@synthesize errors=_errors - In the implementation block
@property (nonatomic,retain) NSArray * warnings;              //@synthesize warnings=_warnings - In the implementation block
-(NSString *)status;
-(NSArray *)errors;
-(void)setStatus:(NSString *)arg1 ;
-(NSArray *)warnings;
-(void)setWarnings:(NSArray *)arg1 ;
-(void)setErrors:(NSArray *)arg1 ;
@end

