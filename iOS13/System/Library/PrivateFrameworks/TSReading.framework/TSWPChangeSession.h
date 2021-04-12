/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSPObject.h>

@class TSKAnnotationAuthor, NSDate;

@interface TSWPChangeSession : TSPObject {

	unsigned _sessionUID;
	TSKAnnotationAuthor* _author;
	NSDate* _date;

}

@property (assign,nonatomic) unsigned sessionUID; 
@property (nonatomic,retain) TSKAnnotationAuthor * author; 
@property (nonatomic,retain) NSDate * date; 
-(void)dealloc;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(TSKAnnotationAuthor *)author;
-(void)setAuthor:(TSKAnnotationAuthor *)arg1 ;
-(void)setSessionUID:(unsigned)arg1 ;
-(unsigned)sessionUID;
-(BOOL)isEqualToSession:(id)arg1 ;
@end

