/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <InAppMessages/InAppMessages-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface IAMMessage : NSObject <NSCopying> {

	BOOL _requiresCloseButton;
	NSString* _identifier;
	NSArray* _contentPages;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * contentPages;                  //@synthesize contentPages=_contentPages - In the implementation block
@property (nonatomic,readonly) BOOL requiresCloseButton;                //@synthesize requiresCloseButton=_requiresCloseButton - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSArray *)contentPages;
-(id)initWithIdentifier:(id)arg1 contentPages:(id)arg2 requiresCloseButton:(BOOL)arg3 ;
-(id)initWithICApplicationMessage:(id)arg1 ;
-(BOOL)requiresCloseButton;
@end

