/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
*/


@class NSString;

@interface C2Route : NSObject {

	NSString* _destination;
	double _lastUpdated;

}

@property (nonatomic,retain) NSString * destination;              //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic) double lastUpdated;                  //@synthesize lastUpdated=_lastUpdated - In the implementation block
-(NSString *)destination;
-(void)setDestination:(NSString *)arg1 ;
-(double)lastUpdated;
-(void)setLastUpdated:(double)arg1 ;
@end

