/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTCacheableResource.h>

@protocol AVTAvatarRecord;
@class AVTUIEnvironment, NSString;

@interface AVTAvatarRecordCacheableResource : NSObject <AVTCacheableResource> {

	BOOL _includeAvatarData;
	id<AVTAvatarRecord> _record;
	AVTUIEnvironment* _environment;

}

@property (nonatomic,readonly) AVTUIEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) BOOL includeAvatarData;                      //@synthesize includeAvatarData=_includeAvatarData - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarRecord> record;                  //@synthesize record=_record - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)persistentIdentifierPrefixForRecordWithIdentifier:(id)arg1 ;
+(id)persistentIdentifierForRecordData:(id)arg1 ;
-(NSString *)description;
-(AVTUIEnvironment *)environment;
-(id<AVTAvatarRecord>)record;
-(BOOL)requiresEncryption;
-(id)initWithAvatarRecord:(id)arg1 includeAvatarData:(BOOL)arg2 environment:(id)arg3 ;
-(id)volatileIdentifierForScope:(id)arg1 ;
-(unsigned long long)costForScope:(id)arg1 ;
-(id)tokenForObservingChangesWithHandler:(/*^block*/id)arg1 ;
-(id)persistentIdentifierForScope:(id)arg1 ;
-(id)identifierForScope:(id)arg1 ;
-(BOOL)includeAvatarData;
@end

