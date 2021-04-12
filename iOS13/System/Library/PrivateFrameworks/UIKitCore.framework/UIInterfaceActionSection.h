/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithActions:(id)arg1 ;
-(NSArray *)actions;
-(NSString *)sectionID;
-(id)copyOfActions;
@end

