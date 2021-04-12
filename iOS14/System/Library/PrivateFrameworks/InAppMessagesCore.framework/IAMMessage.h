/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
*/

#import <InAppMessagesCore/InAppMessagesCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface IAMMessage : NSObject <NSCopying> {

	BOOL _requiresCloseButton;
	NSString* _identifier;
	NSString* _messageGroupIdentifier;
	NSArray* _contentPages;

}

@property (nonatomic,copy,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageGroupIdentifier;              //@synthesize messageGroupIdentifier=_messageGroupIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * contentPages;                              //@synthesize contentPages=_contentPages - In the implementation block
@property (nonatomic,readonly) BOOL requiresCloseButton;                            //@synthesize requiresCloseButton=_requiresCloseButton - In the implementation block
-(NSArray *)contentPages;
-(id)initWithICInAppMessageEntry:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 messageGroupIdentifier:(id)arg2 contentPages:(id)arg3 requiresCloseButton:(BOOL)arg4 ;
-(NSString *)messageGroupIdentifier;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)requiresCloseButton;
@end

