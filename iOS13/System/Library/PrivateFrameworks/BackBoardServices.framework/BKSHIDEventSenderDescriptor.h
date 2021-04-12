/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BKSHIDEventDisplay, NSString;

@interface BKSHIDEventSenderDescriptor : NSObject <BSProtobufSerializable, NSCopying, NSMutableCopying, NSSecureCoding> {

	long long _hardwareType;
	BKSHIDEventDisplay* _associatedDisplay;
	BOOL _authenticated;
	unsigned _primaryPage;
	unsigned _primaryUsage;
	unsigned long long _senderID;

}

@property (nonatomic,readonly) long long hardwareType;                                 //@synthesize hardwareType=_hardwareType - In the implementation block
@property (nonatomic,readonly) BKSHIDEventDisplay * associatedDisplay;                 //@synthesize associatedDisplay=_associatedDisplay - In the implementation block
@property (getter=isAuthenticated,nonatomic,readonly) BOOL authenticated;              //@synthesize authenticated=_authenticated - In the implementation block
@property (nonatomic,readonly) unsigned primaryPage;                                   //@synthesize primaryPage=_primaryPage - In the implementation block
@property (nonatomic,readonly) unsigned primaryUsage;                                  //@synthesize primaryUsage=_primaryUsage - In the implementation block
@property (nonatomic,readonly) unsigned long long senderID;                            //@synthesize senderID=_senderID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
+(id)build:(/*^block*/id)arg1 ;
+(id)wildcard;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initForProtobufDecoding;
-(BOOL)isAuthenticated;
-(unsigned long long)senderID;
-(id)_initWithHardwareType:(long long)arg1 associatedDisplay:(id)arg2 authenticated:(BOOL)arg3 primaryPage:(unsigned)arg4 primaryUsage:(unsigned)arg5 senderID:(unsigned long long)arg6 ;
-(long long)hardwareType;
-(BKSHIDEventDisplay *)associatedDisplay;
-(unsigned)primaryPage;
-(unsigned)primaryUsage;
@end

