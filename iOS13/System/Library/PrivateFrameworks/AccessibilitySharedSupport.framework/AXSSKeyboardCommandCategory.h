/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


@class NSArray, NSString;

@interface AXSSKeyboardCommandCategory : NSObject {

	NSArray* _commands;
	NSString* _localizedName;

}

@property (nonatomic,readonly) NSArray * commands;                    //@synthesize commands=_commands - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
+(id)allCategoriesForAvailableCommands:(id)arg1 ;
+(id)_basicCommandsFromAvailableCommands:(id)arg1 ;
+(id)_movementCommandsFromAvailableCommands:(id)arg1 ;
+(id)_interactionCommandsFromAvailableCommands:(id)arg1 ;
+(id)_deviceCommandsFromAvailableCommands:(id)arg1 ;
+(id)_gesturesCommandsFromAvailableCommands:(id)arg1 ;
+(id)_categoryWithCommands:(id)arg1 availableCommands:(id)arg2 localizedName:(id)arg3 ;
+(id)_categoryWithCommandIdentifiers:(id)arg1 availableCommands:(id)arg2 localizedName:(id)arg3 ;
-(NSString *)localizedName;
-(NSArray *)commands;
-(id)initWithCommands:(id)arg1 localizedName:(id)arg2 ;
@end

