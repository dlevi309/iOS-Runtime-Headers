/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class NSString;

@interface CAMCTMEndCaptureCommand : CAMCaptureCommand {

	NSString* __persistenceUUID;

}

@property (nonatomic,readonly) NSString * _persistenceUUID;              //@synthesize _persistenceUUID=__persistenceUUID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(NSString *)_persistenceUUID;
-(id)initWithPersistenceUUID:(id)arg1 ;
@end

