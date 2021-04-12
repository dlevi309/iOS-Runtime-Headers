/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
*/

#import <AccessibilityPlatformTranslation/AccessibilityPlatformTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface AXPTranslationObject : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isApplicationElement;
	BOOL _didPopuldateAppInfo;
	int _pid;
	unsigned long long _objectID;
	NSString* _bridgeDelegateToken;
	NSData* _rawElementData;
	/*^block*/id _remoteDescriptionBlock;
	NSString* _remoteDebugDescription;

}

@property (assign,nonatomic) unsigned long long objectID;                  //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy) NSString * remoteDebugDescription;              //@synthesize remoteDebugDescription=_remoteDebugDescription - In the implementation block
@property (assign,nonatomic) int pid;                                      //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) BOOL isApplicationElement;                    //@synthesize isApplicationElement=_isApplicationElement - In the implementation block
@property (nonatomic,copy) NSString * bridgeDelegateToken;                 //@synthesize bridgeDelegateToken=_bridgeDelegateToken - In the implementation block
@property (nonatomic,copy) NSData * rawElementData;                        //@synthesize rawElementData=_rawElementData - In the implementation block
@property (assign,nonatomic) BOOL didPopuldateAppInfo;                     //@synthesize didPopuldateAppInfo=_didPopuldateAppInfo - In the implementation block
@property (nonatomic,copy) id remoteDescriptionBlock;                      //@synthesize remoteDescriptionBlock=_remoteDescriptionBlock - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)allowedDecodableClasses;
-(int)pid;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)objectID;
-(void)setObjectID:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setPid:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)rawElementData;
-(BOOL)didPopuldateAppInfo;
-(void)setIsApplicationElement:(BOOL)arg1 ;
-(void)setDidPopuldateAppInfo:(BOOL)arg1 ;
-(id)remoteDescriptionBlock;
-(void)setRemoteDescriptionBlock:(id)arg1 ;
-(void)setBridgeDelegateToken:(NSString *)arg1 ;
-(NSString *)bridgeDelegateToken;
-(BOOL)isApplicationElement;
-(void)setRawElementData:(NSData *)arg1 ;
-(NSString *)remoteDebugDescription;
-(void)setRemoteDebugDescription:(NSString *)arg1 ;
@end

