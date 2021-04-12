/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface TILanguageModelAdaptationContext : NSObject <NSCopying> {

	BOOL _isOnline;
	NSString* _appContext;
	NSString* _recipientNameDigest;
	NSDictionary* _recipientContext;

}

@property (nonatomic,readonly) NSString * appContext;                            //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,readonly) NSString * recipientNameDigest;                   //@synthesize recipientNameDigest=_recipientNameDigest - In the implementation block
@property (nonatomic,readonly) NSDictionary * recipientContext;                  //@synthesize recipientContext=_recipientContext - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * identifierForResponseKit; 
@property (assign,nonatomic) BOOL isOnline;                                      //@synthesize isOnline=_isOnline - In the implementation block
-(id)description;
-(NSString *)appContext;
-(NSString *)identifier;
-(BOOL)isOnline;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 andRecipientRecord:(id)arg2 ;
-(id)initWithClientIdentifier:(id)arg1 andRecipientContactInfo:(id)arg2 ;
-(NSString *)identifierForResponseKit;
-(NSString *)recipientNameDigest;
-(NSDictionary *)recipientContext;
-(void)setIsOnline:(BOOL)arg1 ;
@end

