/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/


#import <TVPlayback/TVPlayback-Structs.h>
@class NSDate;

@interface TVPPlaybackImageLoadInfo : NSObject {

	id _identifier;
	double _requestedTime;
	NSDate* _requestedDate;
	/*^block*/id _timeBasedHandler;
	/*^block*/id _dateBasedHandler;
	CGSize _maxSize;
	SCD_Struct_TV1 _requestedCMTime;

}

@property (nonatomic,retain) id identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double requestedTime;                        //@synthesize requestedTime=_requestedTime - In the implementation block
@property (nonatomic,retain) NSDate * requestedDate;                      //@synthesize requestedDate=_requestedDate - In the implementation block
@property (assign,nonatomic) SCD_Struct_TV1 requestedCMTime;              //@synthesize requestedCMTime=_requestedCMTime - In the implementation block
@property (assign,nonatomic) CGSize maxSize;                              //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,copy) id timeBasedHandler;                           //@synthesize timeBasedHandler=_timeBasedHandler - In the implementation block
@property (nonatomic,copy) id dateBasedHandler;                           //@synthesize dateBasedHandler=_dateBasedHandler - In the implementation block
-(void)setMaxSize:(CGSize)arg1 ;
-(id)description;
-(CGSize)maxSize;
-(void)setIdentifier:(id)arg1 ;
-(id)identifier;
-(void)setRequestedDate:(NSDate *)arg1 ;
-(double)requestedTime;
-(NSDate *)requestedDate;
-(void)setRequestedTime:(double)arg1 ;
-(id)dateBasedHandler;
-(id)timeBasedHandler;
-(void)callCompletionHandlerWithImage:(id)arg1 actualCMTime:(SCD_Struct_TV1)arg2 actualDate:(id)arg3 ;
-(SCD_Struct_TV1)requestedCMTime;
-(void)setRequestedCMTime:(SCD_Struct_TV1)arg1 ;
-(void)setTimeBasedHandler:(id)arg1 ;
-(void)setDateBasedHandler:(id)arg1 ;
@end

