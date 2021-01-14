/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TRIAppContainer, NSURL;

@interface TRIDynamicNamespaceRecord : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasFetched;
	int _cloudKitContainer;
	unsigned _compatibilityVersion;
	NSString* _name;
	NSString* _teamId;
	TRIAppContainer* _appContainer;
	NSURL* _defaultsFileURL;

}

@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * teamId;                           //@synthesize teamId=_teamId - In the implementation block
@property (nonatomic,readonly) TRIAppContainer * appContainer;              //@synthesize appContainer=_appContainer - In the implementation block
@property (nonatomic,readonly) int cloudKitContainer;                       //@synthesize cloudKitContainer=_cloudKitContainer - In the implementation block
@property (nonatomic,readonly) unsigned compatibilityVersion;               //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,readonly) NSURL * defaultsFileURL;                     //@synthesize defaultsFileURL=_defaultsFileURL - In the implementation block
@property (nonatomic,readonly) BOOL hasFetched;                             //@synthesize hasFetched=_hasFetched - In the implementation block
+(void)load;
+(BOOL)supportsSecureCoding;
+(id)dynamicNamespaceRecordWithName:(id)arg1 teamId:(id)arg2 appContainer:(id)arg3 cloudKitContainer:(int)arg4 compatibilityVersion:(unsigned)arg5 defaultsFileURL:(id)arg6 hasFetched:(BOOL)arg7 ;
-(unsigned)compatibilityVersion;
-(NSString *)teamId;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(TRIAppContainer *)appContainer;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithReplacementCompatibilityVersion:(unsigned)arg1 ;
-(int)cloudKitContainer;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithReplacementName:(id)arg1 ;
-(id)initWithName:(id)arg1 teamId:(id)arg2 appContainer:(id)arg3 cloudKitContainer:(int)arg4 compatibilityVersion:(unsigned)arg5 defaultsFileURL:(id)arg6 hasFetched:(BOOL)arg7 ;
-(NSURL *)defaultsFileURL;
-(BOOL)hasFetched;
-(BOOL)isEqualToDynamicNamespaceRecord:(id)arg1 ;
-(id)copyWithReplacementTeamId:(id)arg1 ;
-(id)copyWithReplacementAppContainer:(id)arg1 ;
-(id)copyWithReplacementCloudKitContainer:(int)arg1 ;
-(id)copyWithReplacementDefaultsFileURL:(id)arg1 ;
-(id)copyWithReplacementHasFetched:(BOOL)arg1 ;
-(void)_swizzledEncodeWithCoder:(id)arg1 ;
@end

