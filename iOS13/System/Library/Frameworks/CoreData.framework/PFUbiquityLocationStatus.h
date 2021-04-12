/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class PFUbiquityLocation, NSError;

@interface PFUbiquityLocationStatus : NSObject {

	BOOL _isLive;
	BOOL _isDeleted;
	BOOL _isDownloaded;
	BOOL _isDownloading;
	BOOL _isUploaded;
	BOOL _isUploading;
	BOOL _isImported;
	BOOL _isScheduled;
	BOOL _isExported;
	BOOL _isFailed;
	PFUbiquityLocation* _location;
	NSError* _error;
	unsigned long long _hash;
	long long _numBytes;
	long long _numNotifications;

}

@property (nonatomic,readonly) BOOL isLive;                                //@synthesize isLive=_isLive - In the implementation block
@property (nonatomic,readonly) BOOL isDeleted;                             //@synthesize isDeleted=_isDeleted - In the implementation block
@property (nonatomic,readonly) BOOL isDownloaded;                          //@synthesize isDownloaded=_isDownloaded - In the implementation block
@property (assign,nonatomic) BOOL isDownloading;                           //@synthesize isDownloading=_isDownloading - In the implementation block
@property (nonatomic,readonly) BOOL isUploaded;                            //@synthesize isUploaded=_isUploaded - In the implementation block
@property (nonatomic,readonly) BOOL isUploading;                           //@synthesize isUploading=_isUploading - In the implementation block
@property (nonatomic,readonly) BOOL isScheduled;                           //@synthesize isScheduled=_isScheduled - In the implementation block
@property (nonatomic,readonly) BOOL isImported;                            //@synthesize isImported=_isImported - In the implementation block
@property (nonatomic,readonly) BOOL isExported;                            //@synthesize isExported=_isExported - In the implementation block
@property (nonatomic,readonly) BOOL isFailed;                              //@synthesize isFailed=_isFailed - In the implementation block
@property (nonatomic,readonly) long long numBytes;                         //@synthesize numBytes=_numBytes - In the implementation block
@property (nonatomic,readonly) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long numNotifications;                 //@synthesize numNotifications=_numNotifications - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)hash;
-(id)description;
-(NSError *)error;
-(long long)numBytes;
-(PFUbiquityLocation *)location;
-(BOOL)isFailed;
-(BOOL)isScheduled;
-(id)initWithLocation:(id)arg1 ;
-(BOOL)isUploaded;
-(BOOL)isDownloaded;
-(BOOL)isUploading;
-(BOOL)isDownloading;
-(BOOL)isLive;
-(BOOL)isDeleted;
-(void)statusDidChange;
-(void)checkFileURLState;
-(void)logWasImported;
-(void)logWasScheduled;
-(void)logImportWasCancelled;
-(void)logWasExported;
-(void)encounteredError:(id)arg1 ;
-(void)recoveredFromError;
-(void)setIsDownloading:(BOOL)arg1 ;
-(BOOL)isImported;
-(BOOL)isExported;
-(long long)numNotifications;
@end

