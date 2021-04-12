/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSArray, NSDictionary;

@interface AFServiceDeviceContext : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;
	NSString* _mediaSystemIdentifier;
	NSString* _mediaRouteIdentifier;
	NSString* _roomName;
	long long _proximity;
	NSArray* _contextSnapshots;
	NSDictionary* _serializedContextByKey;
	NSDictionary* _metricsContext;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaSystemIdentifier;                   //@synthesize mediaSystemIdentifier=_mediaSystemIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaRouteIdentifier;                    //@synthesize mediaRouteIdentifier=_mediaRouteIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * roomName;                                //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,readonly) long long proximity;                                     //@synthesize proximity=_proximity - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contextSnapshots;                         //@synthesize contextSnapshots=_contextSnapshots - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serializedContextByKey;              //@synthesize serializedContextByKey=_serializedContextByKey - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metricsContext;                      //@synthesize metricsContext=_metricsContext - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)proximity;
-(NSString *)mediaRouteIdentifier;
-(NSArray *)contextSnapshots;
-(NSDictionary *)serializedContextByKey;
-(NSDictionary *)metricsContext;
-(id)description;
-(NSString *)mediaSystemIdentifier;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSString *)roomName;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 mediaSystemIdentifier:(id)arg2 mediaRouteIdentifier:(id)arg3 roomName:(id)arg4 proximity:(long long)arg5 contextSnapshots:(id)arg6 serializedContextByKey:(id)arg7 metricsContext:(id)arg8 ;
@end

