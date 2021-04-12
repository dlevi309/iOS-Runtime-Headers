/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/SYChange.h>
#import <libobjc.A.dylib/MTProtoBufferSerializable.h>
#import <libobjc.A.dylib/MTSerializable.h>
#import <libobjc.A.dylib/MTSyncable.h>

@class NSString, NSDate;

@interface MTSyncDismiss : NSObject <SYChange, MTProtoBufferSerializable, MTSerializable, MTSyncable> {

	float _syncVersion;
	NSDate* _dismissDate;
	NSString* _identifier;
	NSDate* _date;

}

@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer; 
@property (nonatomic,readonly) long long changeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDate * dismissDate;                       //@synthesize dismissDate=_dismissDate - In the implementation block
@property (nonatomic,retain) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) float syncVersion;                          //@synthesize syncVersion=_syncVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long syncType; 
@property (nonatomic,readonly) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSDate * syncDate; 
+(BOOL)supportsSecureCoding;
+(id)syncDismissOfObjectWithIdentifier:(id)arg1 dismissDate:(id)arg2 date:(id)arg3 version:(float)arg4 ;
+(id)syncDismissOfObjectWithIdentifier:(id)arg1 dismissDate:(id)arg2 date:(id)arg3 ;
+(id)deserialize:(id)arg1 ;
-(id)serialize;
-(id)initFromDeserializer:(id)arg1 ;
-(long long)changeType;
-(void)serializeWithSerializer:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)syncDate;
-(void)setDate:(NSDate *)arg1 ;
-(unsigned long long)syncType;
-(NSString *)description;
-(NSString *)sequencer;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDismissedObjectIdentifier:(id)arg1 dismissDate:(id)arg2 date:(id)arg3 version:(float)arg4 ;
-(BOOL)conflicts:(id)arg1 ;
-(id)preferred:(id)arg1 ;
-(void)setDismissDate:(NSDate *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)objectIdentifier;
-(NSDate *)date;
-(NSString *)identifier;
-(NSDate *)dismissDate;
-(NSString *)syncIdentifier;
-(float)syncVersion;
-(void)setSyncVersion:(float)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

