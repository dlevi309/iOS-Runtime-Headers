/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
*/

@class NSSet;


@protocol SLGDomainWhitelisting <NSObject>
@property (assign,nonatomic) BOOL allowUnspecifiedDomains; 
@property (nonatomic,readonly) NSSet * whitelist; 
@required
-(NSSet *)whitelist;
-(void)addDomain:(id)arg1;
-(BOOL)allowUnspecifiedDomains;
-(void)setAllowUnspecifiedDomains:(BOOL)arg1;
-(BOOL)isDomainWhitelisted:(id)arg1;
-(void)removeDomain:(id)arg1;

@end

