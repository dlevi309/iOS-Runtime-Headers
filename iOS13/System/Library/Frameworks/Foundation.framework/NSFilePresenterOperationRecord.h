/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSString;

@interface NSFilePresenterOperationRecord : NSObject {

	NSString* operationDescription;
	long long state;
	id reactor;

}

@property (readonly) NSString * operationDescription; 
@property (readonly) long long state; 
@property (assign) id reactor; 
+(id)operationRecordWithDescription:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)state;
-(void)setReactor:(id)arg1 ;
-(void)didBegin;
-(void)didEnd;
-(void)willEnd;
-(id)reactor;
-(NSString *)operationDescription;
-(id)_reactorQueue;
@end

