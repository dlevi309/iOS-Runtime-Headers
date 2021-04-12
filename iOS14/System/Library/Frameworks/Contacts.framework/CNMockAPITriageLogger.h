/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNAPITriageLogger.h>

@class NSString;

@interface CNMockAPITriageLogger : NSObject <CNAPITriageLogger>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willExecuteFetchRequest:(id)arg1 ;
-(void)didExecuteFetchRequest:(id)arg1 duration:(double)arg2 ;
-(void)request:(id)arg1 spentTimeInClientCode:(double)arg2 ;
-(void)request:(id)arg1 encounteredError:(id)arg2 ;
-(void)request:(id)arg1 willReturnAnchor:(id)arg2 ;
-(void)request:(id)arg1 containsContact:(id)arg2 ;
-(void)clientStoppedEnumerationForRequest:(id)arg1 ;
-(void)didReturnAllResultsForContactFetchRequest:(id)arg1 ;
@end

