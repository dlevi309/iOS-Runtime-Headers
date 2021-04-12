/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)finished;
-(id)copyToHeap;
-(id)debugDescription;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setValue:(id)arg1 ;
-(BOOL)_isToManyChangeInformation;
-(id)description;
-(void)setFinished:(BOOL)arg1 ;
-(id)value;
-(void)dealloc;
@end

