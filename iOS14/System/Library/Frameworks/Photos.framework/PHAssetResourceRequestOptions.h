/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PHAssetResourceRequestOptions : NSObject <NSCopying> {

	BOOL _networkAccessAllowed;
	BOOL _resistentToPrune;
	BOOL _downloadIsTransient;
	/*^block*/id _progressHandler;

}

@property (assign,nonatomic) BOOL resistentToPrune;                                                //@synthesize resistentToPrune=_resistentToPrune - In the implementation block
@property (assign,nonatomic) BOOL downloadIsTransient;                                             //@synthesize downloadIsTransient=_downloadIsTransient - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
-(BOOL)resistentToPrune;
-(void)setResistentToPrune:(BOOL)arg1 ;
-(BOOL)downloadIsTransient;
-(void)setDownloadIsTransient:(BOOL)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(BOOL)isNetworkAccessAllowed;
-(id)progressHandler;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

