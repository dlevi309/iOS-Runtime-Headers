/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

