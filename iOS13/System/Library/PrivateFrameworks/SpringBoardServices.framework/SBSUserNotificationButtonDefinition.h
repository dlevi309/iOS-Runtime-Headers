/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface SBSUserNotificationButtonDefinition : NSObject <NSCopying, NSMutableCopying> {

	NSString* _title;
	int _presentationStyle;
	BOOL _isPreferredButton;

}

@property (nonatomic,copy,readonly) NSString * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) int presentationStyle;               //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,readonly) BOOL isPreferredButton;              //@synthesize isPreferredButton=_isPreferredButton - In the implementation block
+(id)_buttonDefinitionsFromSerializedDefinitions:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(id)build;
-(int)presentationStyle;
-(id)initWithTitle:(id)arg1 ;
-(id)_initWithDictionary:(id)arg1 ;
-(void)_copyPropertiesToDefinition:(id)arg1 ;
-(BOOL)isPreferredButton;
@end

