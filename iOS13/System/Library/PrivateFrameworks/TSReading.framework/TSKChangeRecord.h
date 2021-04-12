/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@interface TSKChangeRecord : NSObject {

	int mKind;
	id mDetails;

}

@property (nonatomic,readonly) int kind; 
@property (nonatomic,readonly) id details; 
@property (nonatomic,readonly) BOOL allowedInCommit; 
+(id)changeRecordWithKind:(int)arg1 details:(id)arg2 ;
-(void)dealloc;
-(int)kind;
-(id)details;
-(id)initWithKind:(int)arg1 details:(id)arg2 ;
-(BOOL)allowedInCommit;
@end

