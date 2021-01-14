/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@class NSMutableString;

@interface PVPMR : NSObject {

	BOOL gPVPMR_ENABLED;
	NSMutableString* _buffer;

}
+(id)sharedInstance;
-(id)init;
-(void)setLevel:(int)arg1 ;
-(void)dealloc;
-(void)writePMRInfoToFile:(id)arg1 pmrString:(id)arg2 ;
-(int)getLevel;
-(id)reportPMR:(double)arg1 pmrKey:(id)arg2 pmrComment:(id)arg3 ;
-(void)writePMRInfoToBuffer:(id)arg1 ;
-(void)writeBufferToPermanentStorage;
@end

