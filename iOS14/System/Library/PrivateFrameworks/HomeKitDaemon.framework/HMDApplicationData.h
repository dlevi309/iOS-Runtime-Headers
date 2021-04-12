/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@class NSUUID, NSMutableDictionary, NSString;

@interface HMDApplicationData : HMFObject <NSSecureCoding, NSCopying, HMFDumpState> {

	NSUUID* _parentUUID;
	NSUUID* _uuid;
	NSMutableDictionary* _appDataDictionary;

}

@property (nonatomic,retain) NSUUID * uuid;                                        //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appDataDictionary;              //@synthesize appDataDictionary=_appDataDictionary - In the implementation block
@property (nonatomic,copy) NSUUID * parentUUID;                                    //@synthesize parentUUID=_parentUUID - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)removeApplicationDataForIdentifier:(id)arg1 ;
-(NSUUID *)uuid;
-(id)dumpState;
-(void)encodeWithCoder:(id)arg1 ;
-(void)updateWithModel:(id)arg1 ;
-(NSUUID *)parentUUID;
-(id)dictionary;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setParentUUID:(NSUUID *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)initWithParentUUID:(id)arg1 ;
-(void)setApplicationData:(id)arg1 forIdentifier:(id)arg2 ;
-(NSMutableDictionary *)appDataDictionary;
-(id)initWithDictionary:(id)arg1 parentUUID:(id)arg2 ;
-(void)updateParentUUIDIfNil:(id)arg1 ;
-(id)applicationDataForIdentifier:(id)arg1 ;
-(void)setAppDataDictionary:(NSMutableDictionary *)arg1 ;
@end

