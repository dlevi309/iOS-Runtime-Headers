/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface STAlwaysAllowList : NSObject <NSCopying> {

	BOOL _shouldAllowEditing;
	NSArray* _allowedBundleIDs;

}

@property (nonatomic,copy) NSArray * allowedBundleIDs;              //@synthesize allowedBundleIDs=_allowedBundleIDs - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowEditing;               //@synthesize shouldAllowEditing=_shouldAllowEditing - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAllowedBundleIDs:(NSArray *)arg1 ;
-(NSArray *)allowedBundleIDs;
-(BOOL)shouldAllowEditing;
-(void)setShouldAllowEditing:(BOOL)arg1 ;
-(id)initWithBlueprint:(id)arg1 ;
@end

