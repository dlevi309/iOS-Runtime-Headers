/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSString *)appContext;
-(BOOL)isOnline;
-(id)initWithClientIdentifier:(id)arg1 andRecipientRecord:(id)arg2 ;
-(id)initWithClientIdentifier:(id)arg1 andRecipientContactInfo:(id)arg2 ;
-(NSString *)identifierForResponseKit;
-(NSString *)recipientNameDigest;
-(NSDictionary *)recipientContext;
-(void)setIsOnline:(BOOL)arg1 ;
@end

