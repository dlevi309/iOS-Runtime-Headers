/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)sessionID;
-(id)version;
-(void)processCMData:(id)arg1 ;
-(id)deviceString;
-(void)resetReader;
-(id)grabNextEvent;
-(id)cv3dVersion;
-(id)iOSVersion;
-(id)macOSVersion;
-(id)cvPlayerVersion;
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

