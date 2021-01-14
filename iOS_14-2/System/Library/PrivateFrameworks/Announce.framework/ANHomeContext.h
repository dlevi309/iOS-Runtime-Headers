/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface ANHomeContext : NSObject <NSSecureCoding> {

	BOOL _isEmpty;
	NSString* _homeName;
	NSArray* _zoneNames;
	NSArray* _roomNames;

}

@property (nonatomic,retain) NSString * homeName;              //@synthesize homeName=_homeName - In the implementation block
@property (nonatomic,retain) NSArray * zoneNames;              //@synthesize zoneNames=_zoneNames - In the implementation block
@property (nonatomic,retain) NSArray * roomNames;              //@synthesize roomNames=_roomNames - In the implementation block
@property (assign,nonatomic) BOOL isEmpty;                     //@synthesize isEmpty=_isEmpty - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHomeName:(NSString *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)homeName;
-(BOOL)isEmpty;
-(void)setIsEmpty:(BOOL)arg1 ;
-(void)setZoneNames:(NSArray *)arg1 ;
-(NSArray *)zoneNames;
-(void)setRoomNames:(NSArray *)arg1 ;
-(NSArray *)roomNames;
@end

