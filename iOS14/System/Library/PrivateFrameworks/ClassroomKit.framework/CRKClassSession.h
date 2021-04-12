/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned short)flags;
-(id)stateDictionary;
-(void)setFlags:(unsigned short)arg1 ;
-(DMFControlSessionIdentifier *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)logBeaconFound;
-(id)lastMatchMessageForCurrentDate:(id)arg1 ;
-(void)setLastBeaconFoundDate:(NSDate *)arg1 ;
-(void)lostBeacon;
-(NSDate *)lastBeaconFoundDate;
-(void)foundBeaconWithFlags:(unsigned short)arg1 ;
@end

