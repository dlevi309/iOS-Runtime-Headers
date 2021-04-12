/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSDownloadPhase, NSError, NSString;

@interface SSDownloadStatus : NSObject <SSXPCCoding, NSCopying> {

	SSDownloadPhase* _activePhase;
	BOOL _contentRestricted;
	NSError* _error;
	BOOL _failed;
	BOOL _paused;

}

@property (nonatomic,retain) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (assign,getter=isContentRestricted,nonatomic) BOOL contentRestricted;              //@synthesize contentRestricted=_contentRestricted - In the implementation block
@property (assign,getter=isFailed,nonatomic) BOOL failed;                                    //@synthesize failed=_failed - In the implementation block
@property (assign,getter=isPausable,nonatomic) BOOL pausable; 
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                    //@synthesize paused=_paused - In the implementation block
@property (getter=isFailedTransient,nonatomic,readonly) BOOL failedTransient; 
@property (nonatomic,readonly) SSDownloadPhase * activePhase;                                //@synthesize activePhase=_activePhase - In the implementation block
@property (nonatomic,readonly) float percentComplete; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isPaused;
-(void)setPausable:(BOOL)arg1 ;
-(BOOL)isPausable;
-(void)setOperationType:(long long)arg1 ;
-(BOOL)isFailed;
-(void)setFailed:(BOOL)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(float)percentComplete;
-(void)setPercentComplete:(float)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setContentRestricted:(BOOL)arg1 ;
-(void)setOperationProgress:(id)arg1 ;
-(BOOL)isContentRestricted;
-(BOOL)isFailedTransient;
-(SSDownloadPhase *)activePhase;
@end

