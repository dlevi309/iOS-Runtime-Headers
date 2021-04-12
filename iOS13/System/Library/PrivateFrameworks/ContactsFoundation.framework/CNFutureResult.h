/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSError;

@interface CNFutureResult : NSObject {

	id _result;
	NSError* _error;

}

@property (nonatomic,retain) id result;                  //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)result;
-(void)setResult:(id)arg1 ;
-(void)setResult:(id)arg1 error:(id)arg2 ;
@end

