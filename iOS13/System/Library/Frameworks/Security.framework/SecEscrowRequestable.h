/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@protocol SecEscrowRequestable <NSObject>
@required
+(id)request:(id*)arg1;
-(BOOL)triggerEscrowUpdate:(id)arg1 error:(id*)arg2;
-(id)fetchStatuses:(id*)arg1;
-(BOOL)pendingEscrowUpload:(id*)arg1;

@end

