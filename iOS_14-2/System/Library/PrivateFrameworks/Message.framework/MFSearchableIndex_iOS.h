/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailDaemon/EDSearchableIndex.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>

@class NSString;

@interface MFSearchableIndex_iOS : EDSearchableIndex <EFLoggable, MFDiagnosticsGenerator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(id)powerObservable;
-(id)initWithName:(id)arg1 dataSource:(id)arg2 reasonProvider:(id)arg3 ;
-(void)_indexMessage:(id)arg1 includeBody:(BOOL)arg2 indexingType:(long long)arg3 ;
-(void)indexMessages:(id)arg1 includeBody:(BOOL)arg2 indexingType:(long long)arg3 ;
-(BOOL)canIndexAttachments;
-(void)logPowerEventWithIdentifier:(id)arg1 eventData:(id)arg2 ;
-(BOOL)shouldCancelSearchQuery;
-(void)addSearchQueryCancelable:(id)arg1 ;
-(void)removeSearchQueryCancelable:(id)arg1 ;
-(BOOL)isPluggedIn;
@end

