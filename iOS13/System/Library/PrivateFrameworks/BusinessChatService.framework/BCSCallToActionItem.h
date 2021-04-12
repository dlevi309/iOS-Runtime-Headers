/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BCSCallToActionItem : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isDefault;
	NSString* _language;
	NSString* _subtitle;
	NSString* _title;
	NSString* _body;

}

@property (nonatomic,readonly) NSString * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * body;                  //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) BOOL isDefault;                   //@synthesize isDefault=_isDefault - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)language;
-(NSString *)body;
-(BOOL)isDefault;
-(id)initWithCallToAction:(id)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 language:(id)arg3 body:(id)arg4 isDefault:(BOOL)arg5 ;
@end

