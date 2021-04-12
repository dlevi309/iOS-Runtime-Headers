/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, AFExperimentGroup, NSArray;

@interface AFExperimentConfiguration : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSString* _identifier;
	NSString* _version;
	AFExperimentGroup* _controlGroup;
	NSArray* _experimentGroups;
	NSString* _salt;

}

@property (nonatomic,readonly) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                            //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) AFExperimentGroup * controlGroup;              //@synthesize controlGroup=_controlGroup - In the implementation block
@property (nonatomic,copy,readonly) NSArray * experimentGroups;                    //@synthesize experimentGroups=_experimentGroups - In the implementation block
@property (nonatomic,copy,readonly) NSString * salt;                               //@synthesize salt=_salt - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)version;
-(NSString *)salt;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(AFExperimentGroup *)controlGroup;
-(NSArray *)experimentGroups;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 version:(id)arg3 controlGroup:(id)arg4 experimentGroups:(id)arg5 salt:(id)arg6 ;
@end

