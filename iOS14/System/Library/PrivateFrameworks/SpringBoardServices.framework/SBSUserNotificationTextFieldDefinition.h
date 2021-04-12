/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface SBSUserNotificationTextFieldDefinition : NSObject <NSCopying, NSMutableCopying> {

	NSString* _title;
	NSString* _value;
	BOOL _isSecure;
	BOOL _hasSetMaxLength;
	unsigned long long _maxLength;
	long long _keyboardType;
	long long _autocorrectionType;
	long long _autocapitalizationType;

}

@property (nonatomic,readonly) BOOL _hasSetMaxLength;                         //@synthesize hasSetMaxLength=_hasSetMaxLength - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                         //@synthesize value=_value - In the implementation block
@property (getter=isSecure,nonatomic,readonly) BOOL secure;                   //@synthesize isSecure=_isSecure - In the implementation block
@property (nonatomic,readonly) unsigned long long maxLength;                  //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,readonly) long long keyboardType;                        //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,readonly) long long autocapitalizationType;              //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) long long autocorrectionType;                  //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
+(id)_definitionsFromSerializedDefinitions:(id)arg1 ;
-(BOOL)isSecure;
-(long long)autocapitalizationType;
-(long long)keyboardType;
-(long long)autocorrectionType;
-(id)build;
-(id)init;
-(unsigned long long)maxLength;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)_initWithDictionary:(id)arg1 ;
-(void)_copyPropertiesToDefinition:(id)arg1 ;
-(BOOL)_hasSetMaxLength;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

