/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTitle:(id)arg1 ;
-(int)presentationStyle;
-(id)build;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)_initWithDictionary:(id)arg1 ;
-(void)_copyPropertiesToDefinition:(id)arg1 ;
-(BOOL)isPreferredButton;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

