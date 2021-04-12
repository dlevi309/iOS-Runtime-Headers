/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol SGSeekable <NSObject>
@property (readonly) unsigned long long offsetInFile; 
@required
-(void)seekToFileOffset:(unsigned long long)arg1;
-(unsigned long long)offsetInFile;
-(const void*)dataOfLength:(unsigned long long)arg1;

@end

