/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFileURL:(NSURL *)arg1 ;
-(void)start;
-(NSString *)filename;
-(ARSession *)session;
-(NSURL *)fileURL;
-(void)setSession:(ARSession *)arg1 ;
-(void)setFilename:(NSString *)arg1 ;
-(void)stopAndDiscard;
-(id)stopAndSave;
-(id)initWithARSession:(id)arg1 ;
@end

