/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/


@class NSDate;

@interface DOCFrecencyBasedEvent : NSObject {

	NSDate* _lastUsedDate;
	double _frecency;

}

@property (nonatomic,retain) NSDate * lastUsedDate;              //@synthesize lastUsedDate=_lastUsedDate - In the implementation block
@property (assign,nonatomic) double frecency;                    //@synthesize frecency=_frecency - In the implementation block
-(NSDate *)lastUsedDate;
-(void)setLastUsedDate:(NSDate *)arg1 ;
-(double)frecency;
-(double)frecencyScoreAtDate:(id)arg1 ;
-(void)setFrecency:(double)arg1 ;
-(void)updateFrecencyAtDate:(id)arg1 ;
@end

