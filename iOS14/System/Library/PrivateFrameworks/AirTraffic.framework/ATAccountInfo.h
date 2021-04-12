/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/

#import <AirTraffic/AirTraffic-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface ATAccountInfo : NSObject <NSCopying> {

	NSString* _altDSID;
	NSString* _appleID;
	NSNumber* _DSID;

}

@property (nonatomic,readonly) NSString * appleID;              //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,readonly) NSString * altDSID;              //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,readonly) NSNumber * DSID;                 //@synthesize DSID=_DSID - In the implementation block
-(NSNumber *)DSID;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)altDSID;
-(NSString *)appleID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

