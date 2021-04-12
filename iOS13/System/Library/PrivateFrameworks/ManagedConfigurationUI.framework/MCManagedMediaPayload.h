/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfiguration/MCPayload.h>

@class MCBook;

@interface MCManagedMediaPayload : MCPayload {

	MCBook* _managedBook;

}

@property (nonatomic,retain) MCBook * managedBook;              //@synthesize managedBook=_managedBook - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)title;
-(void)setManagedBook:(MCBook *)arg1 ;
-(MCBook *)managedBook;
-(id)initWithManagedMedia:(id)arg1 profile:(id)arg2 ;
@end

