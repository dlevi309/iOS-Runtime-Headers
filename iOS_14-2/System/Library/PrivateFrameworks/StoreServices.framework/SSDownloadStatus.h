/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isPausable;
-(void)setPausable:(BOOL)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setContentRestricted:(BOOL)arg1 ;
-(void)setOperationProgress:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setFailed:(BOOL)arg1 ;
-(BOOL)isContentRestricted;
-(NSError *)error;
-(BOOL)isFailedTransient;
-(SSDownloadPhase *)activePhase;
-(void)setPercentComplete:(float)arg1 ;
-(float)percentComplete;
-(void)setOperationType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isFailed;
-(BOOL)isPaused;
-(void)dealloc;
@end

