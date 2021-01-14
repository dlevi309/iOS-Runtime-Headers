/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
*/

#import <HardwareSupport/HardwareSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, Protocol;

@interface HSIORChannelDescription : NSObject <NSCopying> {

	NSString* _summary;
	NSString* _name;
	NSString* _groupName;
	NSString* _subGroupName;
	NSNumber* _identifier;
	NSString* _driverName;
	NSNumber* _driverIdentifier;
	Protocol* _reportingProtocol;

}

@property (nonatomic,retain) NSString * summary;                        //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * groupName;                      //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain) NSString * subGroupName;                   //@synthesize subGroupName=_subGroupName - In the implementation block
@property (nonatomic,retain) NSNumber * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * driverName;                     //@synthesize driverName=_driverName - In the implementation block
@property (nonatomic,retain) NSNumber * driverIdentifier;               //@synthesize driverIdentifier=_driverIdentifier - In the implementation block
@property (nonatomic,retain) Protocol * reportingProtocol;              //@synthesize reportingProtocol=_reportingProtocol - In the implementation block
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(NSString *)name;
-(id)description;
-(NSString *)summary;
-(unsigned long long)hash;
-(NSString *)driverName;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)identifier;
-(void)setSummary:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDriverName:(NSString *)arg1 ;
-(NSNumber *)driverIdentifier;
-(void)setDriverIdentifier:(NSNumber *)arg1 ;
-(NSString *)subGroupName;
-(void)setSubGroupName:(NSString *)arg1 ;
-(Protocol *)reportingProtocol;
-(void)setReportingProtocol:(Protocol *)arg1 ;
-(BOOL)isEqualToChannelDescription:(id)arg1 ;
-(id)initWithIOReportChannelRef:(CFDictionaryRef)arg1 ;
@end

