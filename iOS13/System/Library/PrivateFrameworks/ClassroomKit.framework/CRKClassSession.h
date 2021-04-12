/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/CRKSession.h>
#import <libobjc.A.dylib/CATRemoteConnectionDelegate.h>

@class DMFControlSessionIdentifier, NSDate, NSString;

@interface CRKClassSession : CRKSession <CATRemoteConnectionDelegate> {

	unsigned short _flags;
	DMFControlSessionIdentifier* _identifier;
	NSDate* _lastBeaconFoundDate;

}

@property (assign,nonatomic) unsigned short flags;                                    //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSDate * lastBeaconFoundDate;                            //@synthesize lastBeaconFoundDate=_lastBeaconFoundDate - In the implementation block
@property (nonatomic,readonly) DMFControlSessionIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(DMFControlSessionIdentifier *)identifier;
-(unsigned short)flags;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setFlags:(unsigned short)arg1 ;
-(void)logBeaconFound;
-(id)lastMatchMessageForCurrentDate:(id)arg1 ;
-(void)setLastBeaconFoundDate:(NSDate *)arg1 ;
-(void)lostBeacon;
-(NSDate *)lastBeaconFoundDate;
-(void)foundBeaconWithFlags:(unsigned short)arg1 ;
@end

