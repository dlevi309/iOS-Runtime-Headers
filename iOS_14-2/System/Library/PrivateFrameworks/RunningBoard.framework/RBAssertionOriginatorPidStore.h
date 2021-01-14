/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBAssertionOriginatorPidPersisting.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@class NSString;

@interface RBAssertionOriginatorPidStore : NSObject <RBAssertionOriginatorPidPersisting, RBStateCapturing> {

	SCD_Struct_RB4* _header;
	NSString* _path;
	int* _pids;
	int _headerID;
	int _pidsID;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(id)captureState;
-(id)initWithPath:(id)arg1 ;
-(BOOL)containsPid:(int)arg1 ;
-(void)setValidProcesses:(id)arg1 ;
-(NSString *)debugDescription;
-(BOOL)isValid;
-(NSString *)stateCaptureTitle;
-(void)addPid:(int)arg1 ;
-(void)removePid:(int)arg1 ;
-(void)dealloc;
@end

