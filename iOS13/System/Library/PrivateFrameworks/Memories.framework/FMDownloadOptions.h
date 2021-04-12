/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setDownloadPriority:(unsigned long long)arg1 ;
-(BOOL)allowsCellular;
-(unsigned long long)downloadPriority;
-(void)_configureDefaults;
-(void)setAllowsCellular:(BOOL)arg1 ;
@end

