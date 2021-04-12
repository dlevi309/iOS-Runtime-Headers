/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
*/

@class NSSet;


@protocol SLGDomainWhitelisting <NSObject>
@property (assign,nonatomic) BOOL allowUnspecifiedDomains; 
@property (nonatomic,readonly) NSSet * whitelist; 
@required
-(NSSet *)whitelist;
-(void)addDomain:(id)arg1;
-(BOOL)isDomainWhitelisted:(id)arg1;
-(void)removeDomain:(id)arg1;
-(BOOL)allowUnspecifiedDomains;
-(void)setAllowUnspecifiedDomains:(BOOL)arg1;

@end

