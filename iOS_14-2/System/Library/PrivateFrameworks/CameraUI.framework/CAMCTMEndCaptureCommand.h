/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class NSString;

@interface CAMCTMEndCaptureCommand : CAMCaptureCommand {

	NSString* __persistenceUUID;

}

@property (nonatomic,readonly) NSString * _persistenceUUID;              //@synthesize _persistenceUUID=__persistenceUUID - In the implementation block
-(void)executeWithContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)_persistenceUUID;
-(id)initWithPersistenceUUID:(id)arg1 ;
@end

