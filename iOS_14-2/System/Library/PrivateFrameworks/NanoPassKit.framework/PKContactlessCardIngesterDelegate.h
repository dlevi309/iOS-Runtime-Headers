/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol PKContactlessCardIngesterDelegate <NSObject>
@required
-(void)contactlessCardIngester:(id)arg1 didFailToIngestCardWithError:(id)arg2 resetProvisioning:(BOOL)arg3 isRecoverable:(BOOL)arg4;
-(void)contactlessCardIngester:(id)arg1 didUpdateCardIngestionStatus:(unsigned long long)arg2;

@end

