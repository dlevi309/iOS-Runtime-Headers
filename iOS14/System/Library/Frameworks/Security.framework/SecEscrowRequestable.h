/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@protocol SecEscrowRequestable <NSObject>
@required
+(id)request:(id*)arg1;
-(id)fetchStatuses:(id*)arg1;
-(BOOL)triggerEscrowUpdate:(id)arg1 error:(id*)arg2;
-(BOOL)pendingEscrowUpload:(id*)arg1;

@end

