/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
*/

#import <ProximityUI/PRDataRecorderBase.h>
#import <libobjc.A.dylib/PRItemLocalizerDataRecorder.h>

@class ARSession, NSURL, NSString;

@interface PRARKitDataRecorder : PRDataRecorderBase <PRItemLocalizerDataRecorder> {

	ARSession* _session;
	NSURL* _fileURL;
	NSString* _filename;

}

@property (nonatomic,retain) ARSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                  //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSString * filename;              //@synthesize filename=_filename - In the implementation block
-(void)start;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(ARSession *)session;
-(void)setSession:(ARSession *)arg1 ;
-(void)stopAndDiscard;
-(id)stopAndSave;
-(id)initWithARSession:(id)arg1 ;
@end

