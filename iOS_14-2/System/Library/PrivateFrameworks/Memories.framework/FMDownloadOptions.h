/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@interface FMDownloadOptions : NSObject {

	BOOL _allowsCellular;
	unsigned long long _downloadPriority;

}

@property (assign,nonatomic) BOOL allowsCellular;                              //@synthesize allowsCellular=_allowsCellular - In the implementation block
@property (assign,nonatomic) unsigned long long downloadPriority;              //@synthesize downloadPriority=_downloadPriority - In the implementation block
-(id)init;
-(id)description;
-(BOOL)allowsCellular;
-(void)setAllowsCellular:(BOOL)arg1 ;
-(void)setDownloadPriority:(unsigned long long)arg1 ;
-(unsigned long long)downloadPriority;
-(void)_configureDefaults;
@end

