/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didEnd;
-(void)willEnd;
-(void)didBegin;
-(id)reactor;
-(void)setReactor:(id)arg1 ;
-(id)description;
-(id)_reactorQueue;
-(NSString *)operationDescription;
-(long long)state;
-(void)dealloc;
@end

