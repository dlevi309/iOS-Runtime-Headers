/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/


@class CMDataContainer;

@interface CMFileInterface : NSObject {

	CMDataContainer* _cmDataContainer;

}
+(void)updateCV3DVersion:(id)arg1 container:(id)arg2 ;
+(void)updateCVPlayerVersion:(id)arg1 container:(id)arg2 ;
+(void)updateSessionID:(id)arg1 container:(id)arg2 ;
+(BOOL)writeContainerToFileURL:(id)arg1 container:(id)arg2 ;
-(id)version;
-(id)sessionID;
-(void)processCMData:(id)arg1 ;
-(void)resetReader;
-(id)grabNextEvent;
-(id)cv3dVersion;
-(id)iOSVersion;
-(id)macOSVersion;
-(id)cvPlayerVersion;
-(id)deviceString;
-(id)initReaderWithFileURL:(id)arg1 ;
-(id)grabNextRecvData;
-(id)grabNextSentData;
-(id)grabNextRecvMessage;
-(id)grabNextSentMessage;
-(id)initWriter;
-(void)updateCV3DVersion:(id)arg1 ;
-(void)updateCVPlayerVersion:(id)arg1 ;
-(void)updateSessionID:(id)arg1 ;
-(void)processCMData:(id)arg1 sending:(BOOL)arg2 ;
-(BOOL)saveToFileURL:(id)arg1 ;
@end

