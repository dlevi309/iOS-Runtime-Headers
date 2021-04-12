/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSString;

@interface _DKCachedLocationVisit : NSObject {

	double _entryTime;
	double _exitTime;
	NSString* _locationId;

}

@property (assign,nonatomic) double entryTime;                   //@synthesize entryTime=_entryTime - In the implementation block
@property (assign,nonatomic) double exitTime;                    //@synthesize exitTime=_exitTime - In the implementation block
@property (nonatomic,retain) NSString * locationId;              //@synthesize locationId=_locationId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqualToVisit:(id)arg1 ;
-(double)entryTime;
-(double)exitTime;
-(NSString *)locationId;
-(void)setEntryTime:(double)arg1 ;
-(void)setExitTime:(double)arg1 ;
-(void)setLocationId:(NSString *)arg1 ;
@end

