/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ANCachedDictionaryRepresentationProtocol.h>

@class NSURL, NSDictionary, NSString;

@interface ANNotificationAction : NSObject <NSSecureCoding, ANCachedDictionaryRepresentationProtocol> {

	BOOL _isInternalURL;
	NSURL* _url;
	NSDictionary* _options;

}

@property (nonatomic,copy) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                  //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL isInternalURL;                    //@synthesize isInternalURL=_isInternalURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)actionForLaunchingApp:(id)arg1 withOptions:(id)arg2 ;
+(id)actionForOpeningWebURL:(id)arg1 ;
+(id)actionForLaunchingApp:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)options;
-(void)perform;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithManagedObject:(id)arg1 ;
-(void)setIsInternalURL:(BOOL)arg1 ;
-(BOOL)isInternalURL;
@end

