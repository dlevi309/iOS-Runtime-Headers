/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
*/

#import <CalDAV/CalDAVOperation.h>

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {

	BOOL _fetchPrincipalSearchProperties;

}

@property (assign,nonatomic) id<CalDAVAccountPropertyRefreshDelegate> delegate; 
@property (assign,nonatomic) BOOL fetchPrincipalSearchProperties;                            //@synthesize fetchPrincipalSearchProperties=_fetchPrincipalSearchProperties - In the implementation block
-(void)setFetchPrincipalSearchProperties:(BOOL)arg1 ;
-(void)refreshProperties;
-(BOOL)fetchPrincipalSearchProperties;
-(void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2 ;
@end

