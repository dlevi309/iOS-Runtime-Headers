/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarManagedRecordTransformer.h>

@protocol AVTAvatarManagedRecordTransformer
@required
-(id)identifierForManagedRecordIdentifier:(id)arg1;
-(id)recordWithManagedRecord:(id)arg1 error:(id*)arg2;
-(id)managedRecordIdentifierForIdentifier:(id)arg1;
-(void)updateManagedRecord:(id)arg1 withRecord:(id)arg2;

@end


@interface AVTAvatarManagedRecordTransformer : NSObject <AVTAvatarManagedRecordTransformer>
-(id)identifierForManagedRecordIdentifier:(id)arg1 ;
-(id)recordWithManagedRecord:(id)arg1 error:(id*)arg2 ;
-(id)managedRecordIdentifierForIdentifier:(id)arg1 ;
-(void)updateManagedRecord:(id)arg1 withRecord:(id)arg2 ;
@end

