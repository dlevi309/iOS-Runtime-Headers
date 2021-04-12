/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
*/

#import <AccessibilityPlatformTranslation/AccessibilityPlatformTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class AXPTranslationObject, NSArray;

@interface AXPTranslatorResponse : NSObject <NSCopying, NSSecureCoding> {

	id<NSObject><NSCopying><NSSecureCoding> _resultData;
	unsigned long long _attribute;
	unsigned long long _notification;
	AXPTranslationObject* _associatedNotificationObject;
	unsigned long long _error;

}

@property (nonatomic,retain) id<NSObject><NSCopying><NSSecureCoding> resultData;               //@synthesize resultData=_resultData - In the implementation block
@property (assign,nonatomic) unsigned long long attribute;                                     //@synthesize attribute=_attribute - In the implementation block
@property (assign,nonatomic) unsigned long long notification;                                  //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) AXPTranslationObject * associatedNotificationObject;              //@synthesize associatedNotificationObject=_associatedNotificationObject - In the implementation block
@property (assign,nonatomic) unsigned long long error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) AXPTranslationObject * translationResponse; 
@property (nonatomic,readonly) BOOL boolResponse; 
@property (nonatomic,readonly) NSArray * translationsResponse; 
+(BOOL)supportsSecureCoding;
+(id)emptyResponse;
+(id)allowedDecodableClasses;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)error;
-(unsigned long long)attribute;
-(void)setError:(unsigned long long)arg1 ;
-(unsigned long long)notification;
-(void)setNotification:(unsigned long long)arg1 ;
-(void)setAttribute:(unsigned long long)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)resultData;
-(void)setResultData:(id<NSObject><NSCopying><NSSecureCoding>)arg1 ;
-(AXPTranslationObject *)translationResponse;
-(AXPTranslationObject *)associatedNotificationObject;
-(void)setAssociatedNotificationObject:(AXPTranslationObject *)arg1 ;
-(NSArray *)translationsResponse;
-(BOOL)boolResponse;
@end

