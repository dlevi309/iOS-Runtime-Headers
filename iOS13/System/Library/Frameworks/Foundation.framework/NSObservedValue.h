/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSError;

@interface NSObservedValue : NSObject {

	id _contents;
	id _lastOriginator;
	int _tag;

}

@property (retain) id value; 
@property (retain) NSError * error; 
@property (assign) BOOL finished; 
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(NSError *)error;
-(id)value;
-(BOOL)_isToManyChangeInformation;
-(void)setValue:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(id)copyToHeap;
@end

