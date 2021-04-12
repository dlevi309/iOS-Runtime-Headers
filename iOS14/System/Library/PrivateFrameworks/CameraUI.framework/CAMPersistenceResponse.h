/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@class NSString, NSURL, NSDate, UIImage, CAMCaptureCoordinationInfo;

@interface CAMPersistenceResponse : NSObject {

	unsigned short _sessionIdentifier;
	NSString* _persistenceUUID;
	NSURL* _persistenceURL;
	NSDate* _creationDate;
	UIImage* _scrubberImage;
	CAMCaptureCoordinationInfo* _coordinationInfo;
	CGSize _pixelSize;

}

@property (nonatomic,copy,readonly) NSString * persistenceUUID;                            //@synthesize persistenceUUID=_persistenceUUID - In the implementation block
@property (nonatomic,readonly) unsigned short sessionIdentifier;                           //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * persistenceURL;                                //@synthesize persistenceURL=_persistenceURL - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                      //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) UIImage * scrubberImage;                               //@synthesize scrubberImage=_scrubberImage - In the implementation block
@property (nonatomic,readonly) CGSize pixelSize;                                           //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,readonly) CAMCaptureCoordinationInfo * coordinationInfo;              //@synthesize coordinationInfo=_coordinationInfo - In the implementation block
-(unsigned short)sessionIdentifier;
-(NSURL *)persistenceURL;
-(id)description;
-(NSDate *)creationDate;
-(NSString *)persistenceUUID;
-(CGSize)pixelSize;
-(CAMCaptureCoordinationInfo *)coordinationInfo;
-(id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 url:(id)arg3 creationDate:(id)arg4 scrubberImage:(id)arg5 pixelSize:(CGSize)arg6 coordinationInfo:(id)arg7 ;
-(UIImage *)scrubberImage;
@end

