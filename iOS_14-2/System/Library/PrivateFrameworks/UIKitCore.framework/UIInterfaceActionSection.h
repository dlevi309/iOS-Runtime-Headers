/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface UIInterfaceActionSection : NSObject <NSCopying> {

	NSArray* _actions;
	NSString* _sectionID;

}

@property (nonatomic,readonly) NSArray * actions;                 //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) NSString * sectionID;              //@synthesize sectionID=_sectionID - In the implementation block
+(id)actionsFromSections:(id)arg1 ;
-(NSString *)sectionID;
-(NSArray *)actions;
-(id)description;
-(id)copyOfActions;
-(id)initWithActions:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

