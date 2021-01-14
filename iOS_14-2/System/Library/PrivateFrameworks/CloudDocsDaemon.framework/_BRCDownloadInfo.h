/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCTransferInfo.h>

@class NSMutableDictionary;

@interface _BRCDownloadInfo : _BRCTransferInfo {

	long long previousCompletedUnitCount;
	long long previousTotalUnitCount;
	NSMutableDictionary* _resumeUnitCounts;

}

@property (assign,nonatomic) long long previousCompletedUnitCount; 
@property (assign,nonatomic) long long previousTotalUnitCount; 
@property (nonatomic,readonly) NSMutableDictionary * resumeUnitCounts;              //@synthesize resumeUnitCounts=_resumeUnitCounts - In the implementation block
-(id)init;
-(void)updateLocalizedDescriptionWithOptions:(char)arg1 ;
-(void)copyProgressInfoToProgress:(id)arg1 options:(char)arg2 ;
-(long long)previousCompletedUnitCount;
-(void)setPreviousCompletedUnitCount:(long long)arg1 ;
-(long long)previousTotalUnitCount;
-(void)setPreviousTotalUnitCount:(long long)arg1 ;
-(NSMutableDictionary *)resumeUnitCounts;
@end

