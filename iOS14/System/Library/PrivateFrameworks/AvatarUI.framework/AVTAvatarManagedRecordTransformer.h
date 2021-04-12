/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

